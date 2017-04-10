# Counting-sort
Task from "Algorithms and data structures" subject.
Points: 5/5
Minuses:
- ugly main function

OPEN BY RAW OPTION

The content of the task:
Write a program, which sorts stably in linear time a pair of numbers. Unstable sorting can count for 40% points.

Input:
The input will be the number of pairs of numbers: n. After it will be given n pairs of numbers. 
The last number at the entrance will be the type of test (0 or 1). 
The values of the numbers will be non-negative and will not exceed n-1.

Output:
In the case of the test of type 0, should be written first sorted ascending value of each pair (separated by whitespace).
In the case of the test of type 1, should be written the pairs of numbers 
(separated by a comma, without any whitespace between) sorted stably ascending, according to the first pair value.


Example:

Input:
10
2 3
2 2
2 1
1 1
1 2
1 3
3 2
3 3
3 1
4 0
0

Output:
1
1
1
2
2
2
3
3
3
4

Input:
10
2 3
2 2
2 1
1 1
1 2
1 3
3 2
3 3
3 1
4 0
1

Output:
1,1
1,2
1,3
2,3
2,2
2,1
3,2
3,3
3,1
4,0
