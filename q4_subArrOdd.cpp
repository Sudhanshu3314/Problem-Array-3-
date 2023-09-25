/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = ​Given an integer array arr, return the number of consecutive sequences(subarrays) with odd sum.

Input:[1,3,5]
Output:4
Explanation:These sequences are [1],[3],[5] and [1,3,5]

Input:[0,2,4]
Output:0

Date = /09/2023   */

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

    int countingOfOddSubArrValue = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (vec[i] % 2 != 0 && i != 0 )
        {
            countingOfOddSubArrValue++;
        }
        sum += vec[i];

        if (sum % 2 != 0)
        {
            countingOfOddSubArrValue++;
        }
    }

    cout << countingOfOddSubArrValue << endl;

    cout << endl;
    return 0;
}