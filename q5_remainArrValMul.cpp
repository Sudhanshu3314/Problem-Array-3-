/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = Given an integer array arr, return an array ans such that ans[i] is equal to the product of
all the elements of arr except arr[i].

Input:arr=[1,3,5,7]
Output:[105,35,21,15]
Explanation:ans=[3*5*7,1*5*7,1*3*7,1*3*5]

Input:[-5,-4,0,4,5]
Output:[0,0,400,0,0]

Date = 01/09/2023   */

#include <bits/stdc++.h>
using namespace std;

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

    vector<int> resVec(size, 1);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                resVec[i] = resVec[i] * vec[j];
            }
        }
    }

    cout << endl;

    cout << " -------> { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << resVec[i] << " , ";
        }
        if (i == size - 1)
        {
            cout << resVec[i] << " } ";
        }
    }

    cout << endl;
    return 0;
}