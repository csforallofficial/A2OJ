/*
A. Beautiful Matrix
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

Input
The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

Output
Print a single integer — the minimum number of moves needed to make the matrix beautiful.

Examples
input
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
output
3
input
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
output
1
*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int ro = 5, co = 5, input = 0;
    vector<vector<int>> matrix(ro);
    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j < co; j++)
        {
            cin >> input;
            matrix[i].push_back(input);
        }
    }
    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j < co; j++)
        {
            if (matrix[i][j] == 1)
            {
                if ((2 - i) <= 0 && (2 - j) <= 0)
                    cout << (2 - i) * (-1) + (2 - j) * (-1) << endl;
                else if ((2 - i) <= 0 && (2 - j) >= 0)
                    cout << (2 - i) * (-1) + (2 - j) << endl;
                else if ((2 - i) >= 0 && (2 - j) <= 0)
                    cout << (2 - i) + (2 - j) * (-1) << endl;
                else if ((2 - i) >= 0 && (2 - j) >= 0)
                    cout << (2 - i) + (2 - j) << endl;
            }
        }
    }
    return 0;
}
