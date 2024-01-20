#include <bits/stdc++.h>
using namespace std;

void move_zeroes(vector<int> &arr, int n)
{
    // Brute solution
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }
    for (int i = temp.size(); i < n; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    move_zeroes(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// This problem have Brute Optimal (B O) solutions