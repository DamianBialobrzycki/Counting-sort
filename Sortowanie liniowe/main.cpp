#include <stdio.h>
#include <iostream>

using namespace std;

struct tab
{
	int x;
	int y;
};

tab * sort(tab * A, tab * B, int n)
{
	int p = 0;

	int * ile = new int[n];

	for (int i = 0; i < n; i++)
	{
		ile[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		ile[A[i].x] += 1;
	}

	for (int i = 1; i < n; i++)
	{
		ile[i] = ile[i - 1] + ile[i];
	}

	for (int i = (n - 1); i >= 0; i--)
	{
		p = ile[A[i].x] - 1;
		B[p].x = A[i].x;
		B[p].y = A[i].y;
		ile[A[i].x] -= 1;
	}
	return B;
}

int main()
{


	int rozmiar = 0;
	int polecenie = 0;

	char t[20] = { '\0' };
	char *p, *q;

	int liczba = 0;
	int calaLiczba = 0;

	bool isY = false;
	cin >> rozmiar;

	tab * A = new tab[rozmiar];
	tab * B = new tab[rozmiar];
	cin.ignore();

	int i = 0;
	while (i < rozmiar)
	{
		fgets(t, sizeof t, stdin);

		for (p = t, q = t + sizeof t; p < q; p++)
		{

			if (*p >= 48 && *p <= 57)
			{
				liczba = *p - 48;
				calaLiczba = calaLiczba * 10 + liczba;
			}

			if (*p == ' ')
			{
				A[i].x = calaLiczba;
				isY = true;
				calaLiczba = 0;
				liczba = 0;
			}

			if (*p == '\n')
			{
				A[i].y = calaLiczba;
				isY = false;
			}
		}

		for (int j = 0; j < 20; j++)
			t[j] = '\0';

		liczba = 0;
		calaLiczba = 0;
		isY = false;
		i++;
	}

	cin >> polecenie;
	cin.ignore();

	tab * output = sort(A, B, rozmiar);

	if (polecenie == 0)
		for (int i = 0; i < rozmiar; i++)
			printf("%d\n", output[i].x);
	if (polecenie == 1)
		for (int i = 0; i < rozmiar; i++)
			printf("%d,%d\n", output[i].x, output[i].y);
	return 0;
}