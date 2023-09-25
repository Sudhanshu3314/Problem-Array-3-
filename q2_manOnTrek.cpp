/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
man starts his trek on point 0 with altitude equal 0. You are given an integer array height
of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
(0 <= i < n). Return the highest altitude of a point.

Input: height=[ 4,1,6,0,-8]
Output: 3
Explanation: The man starts at 0 and since then the altitudes covered will be [0, 4, 3,3,3, 5] so the greatest altitude will be 3

Input: height=[ 5, 3, 2]
Output: 0
Explanation: The man starts at 0 and since then the altitudes will be[0, 5, 3, 2] so the greatest altitude will be 0.
Date = 01/09/2023   */

#include <bits/stdc++.h>
using namespace std;

void printMaxHeight(vector<int> &vec)
{
    cout << endl ;
    vector<int> ansVec(vec.size() + 1);
    ansVec[0] = 0;
    for (int i = 1; i < ansVec.size(); i++)
    {
        ansVec[i] = ansVec[i - 1] + vec[i - 1];
    }

    int max = ansVec[0];
    cout << " { " << ansVec[0] << " , ";
    for (int i = 1; i < ansVec.size(); i++)
    {
        // for comparing the elements of vector to get maximum value from vector
        if (ansVec[i] > max)
        {
            max = ansVec[i];
        }
        // For printing elements
        if (i != ansVec.size() - 1)
        {
            cout << ansVec[i] << " , ";
        }
        if (i == ansVec.size() - 1)
        {
            cout << ansVec[i] << " } ";
        }
    }

    cout << "\n Maximum height : " << max << endl;

    return;
}

int main()
{

    int size;
    cout << "\nEnter no. of elements in vector : ";
    cin >> size;

    vector<int> vec(size);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> vec[i];
    }

    printMaxHeight(vec);

    cout << endl;
    return 0;
}