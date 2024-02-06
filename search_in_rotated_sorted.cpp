#include <bits/stdc++.h>
using namespace std;

//optimal solution
int search(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (arr[mid] <= target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << search(arr, n, target);
    return 0;
}

// This problem have brute and optimal solution