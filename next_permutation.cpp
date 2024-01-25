#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr, int n)
{
    int dip = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            dip = i;
            break;
        }
    }
    if (dip == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    for (int i = n - 1; i > dip; i--)
    {
        if (arr[i] < arr[dip])
        {
            swap(arr[i], arr[dip]);
            break;
        }
    }
    reverse(arr.begin() + dip + 1, arr.end());
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    nextPermutation(arr, n);
    return 0;
}
