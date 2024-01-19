#include <bits/stdc++.h>
using namespace std;

void rotate_array(vector<int> &arr, int n, int k)
{
    // Optimal solution
    k = k % n;
    reverse(arr.begin(), arr.begin() + (n - k));
    reverse(arr.begin() + (n - k), arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rotate_array(arr, n, k);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// This problem have Brute Optimal (B O) solutions