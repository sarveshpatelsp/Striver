#include <bits/stdc++.h>

bool binary_search(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << binary_search(arr, n, target);
    return 0;
}

// This problem have only Optimal solution
// Apply this only when you have sorted array 
