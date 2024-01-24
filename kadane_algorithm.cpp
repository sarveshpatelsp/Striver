#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (maxi < sum)
            maxi = sum;
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << kadane(arr, n);
    return 0;
}