/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = - Given an integer array and two integers L and R. Find the sum of elements between the index L and index R.

Input: [1,2,3,4,5] L=1 R=3
Output: 9
Explanation: 2+3+4=9

Input: [1,2,3,4,5] L=2 R=2
Output: 3
Explanation: 3

Date = 01/09/2023   */

#include <bits/stdc++.h>
using namespace std;

void sumOfValueFromLR(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + v[i];
    }
}

int main()
{

    int size;
    cout << "\nEnter size : ";
    cin >> size;

    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> vec[i];
    }

    sumOfValueFromLR(vec);

    int numOfQueries;
    cout << "\nEnter the number of queries : ";
    cin >> numOfQueries;

    while (numOfQueries--)
    {
        int l, r;
        cout << "\nEnter the value of left index : ";
        cin >> l;
        cout << "\nEnter the value of right index : ";
        cin >> r;

        cout << "\n ------> Sum of value from " << l << " index to " << r << " index i.e. " << vec[r] - vec[l - 1] << endl;
    }

    cout << endl;
    return 0;
}