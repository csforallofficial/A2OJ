/*
A. Petya and Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
input
aaaa
aaaA
output
0
input
abs
Abz
output
-1
input
abcdefg
AbCdEfF
output
1
Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:
*/


#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.size(), l2 = s2.size();
    bool flag = false;
    for (int i = 0, j = 0; i < l1 && j < l2; i++, j++)
    {
        if (tolower(s1[i]) == tolower(s2[j]))
            continue;
        else if (tolower(s1[i]) < tolower(s2[j]))
        {
            flag = true;
            cout << "-1" << endl;
            break;
        }
        else if (tolower(s1[i]) > tolower(s2[j]))
        {
            flag = true;
            cout << "1" << endl;
            break;
        }
    }
    if (flag == false)
        cout << "0" << endl;
    return 0;
}
