/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = ​Given an array of size ‘n’ (initially zero) and ‘q’ number of updates where in each update
we can increase the value of all index from index l to index r with value x and in the end
print all the numbers of the array.

Input: q = 3, x = 5, n = 5
Output:[l,r] = {{0,3}, {4,4}, {1,2}
[5 10 10 5 5]

Date = 01/09/2023   */

#include <bits/stdc++.h>
using namespace std;

void addValueIntoVector(vector<int> &v, int &leftIdx, int &rightIdx, int &no)
{
    for (int i = leftIdx; i <= rightIdx; i++)
    {
        int ans = v[i] + no;
        v[i] = ans;
    }
}

int main()
{

    int num;
    cout << "\nEnter number which you want to add in vector : ";
    cin >> num;

    int size;
    cout << "\nEnter the size of vector where value will be added : ";
    cin >> size;

    vector<int> vec(size, 0);

    int noOfQueries;
    cout << "\nEnter number of queries : ";
    cin >> noOfQueries;

    while (noOfQueries--)
    {
    againTakeIndex:
        int l, r;
        cout << "\nEnter the value of left index : ";
        cin >> l;
        cout << "\nEnter the value of right index : ";
        cin >> r;

        if (l < 0 || r >= size)
        {
            cout << "\n ------> You Entered incorrect index. Please , Re-enter index " << endl;
            goto againTakeIndex;
        }

        addValueIntoVector(vec, l, r, num);
    }

    cout << "\n --------> [ ";
    for (int i = 0; i < vec.size(); i++)
    {
        if (i != size - 1)
        {
            cout << vec[i] << " , ";
        }
        if (i == size - 1)
        {
            cout << vec[i] << " ] ";
        }
    }

    cout << endl;
    return 0;
}