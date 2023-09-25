/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = Given an integer array arr consisting of 0’s and 1’s only, return the max length of
sequence which contains equal numbers of 0 and 1.

Input:arr=[0,1,0,1]
Output:4
Explanation:The longest sequence is 0,1,0,1

Input:arr=[0,1,1,0,1,1,1]
Output:4
Explanation:The longest sequence is 0,1,1,0

Date = 01/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int largestSequence(vector<int> &v)
{

    int zeroCount = 0;
    int length = v.size();
    int largeSeqOfZeroOne = -1;

    for (int i = 0; i < length; i++)
    {
        if (v[i] == 0)
        {
            zeroCount++;
        }
    }

    int oneCount = length - zeroCount;

    if (zeroCount < oneCount)
    {
        int zeroIndex;
        for (int i = length - 1; i >= 0; i--)
        {
            if (v[i] == 0)
            {
                zeroIndex = i;
                goto nextStep;
            }
        }
    nextStep:
        if (zeroIndex % 2 != 0)
        {
            oneCount = 0;
            for (int i = 0; i <= zeroIndex; i++)
            {
                if (v[i] == 1)
                {
                    oneCount++;
                }
            }
            if (oneCount == zeroCount)
            {
                largeSeqOfZeroOne = zeroIndex + 1;
            }
        }
        else if (zeroIndex % 2 == 0)
        {
            oneCount = 0;
            for (int i = 0; i <= zeroIndex + 1; i++)
            {
                if (v[i] == 1)
                {
                    oneCount++;
                }
            }
            if (oneCount == zeroCount)
            {
                largeSeqOfZeroOne = zeroIndex + 2;
            }
        }
    }

    if (oneCount < zeroCount)
    {
        int oneIndex;
        for (int i = length - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                oneIndex = i;
                goto nextStep1;
            }
        }
    nextStep1:
        if (oneIndex % 2 != 0)
        {
            zeroCount = 0;
            for (int i = 0; i <= oneIndex; i++)
            {
                if (v[i] == 0)
                {
                    zeroCount++;
                }
            }
            if (oneCount == zeroCount)
            {
                largeSeqOfZeroOne = oneIndex + 1;
            }
        }
        if (oneIndex % 2 == 0)
        {
            zeroCount = 0;
            for (int i = 0; i <= oneIndex + 1; i++)
            {
                if (v[i] == 0)
                {
                    zeroCount++;
                }
            }
            if (oneCount == zeroCount)
            {
                largeSeqOfZeroOne = oneIndex + 2;
            }
        }
    }

    if (zeroCount == oneCount)
    {
        largeSeqOfZeroOne = oneCount + zeroCount;
    }

    return largeSeqOfZeroOne;
}

int main()
{

    int size;
    cout << "\nEnter size of array : ";
    cin >> size;

    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> vec[i];
    }

    cout << "Max length of sequence which contains equal numbers of 0 and 1 : " << largestSequence(vec) << endl;

    cout << endl;
    return 0;
}