#include <bits/stdc++.h>
using namespace std;

// Binary search solution

int first_occurence(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return first;
}

int last_occurence(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last;
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << first_occurence(arr, n, target) << endl;
    cout << last_occurence(arr, n, target);
    return 0;
}

// This problem have two solutions 1. Lower Upper Bound solution 2. Binary search Solution