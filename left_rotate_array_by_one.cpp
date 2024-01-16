#include <bits/stdc++.h>
using namespace std;

void left_rotate(int arr[], int n)
{
    int first = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = first;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    left_rotate(arr, n);
    for (auto it : arr)
        cout << it << " ";
    return 0;
}