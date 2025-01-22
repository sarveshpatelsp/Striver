#include <bits/stdc++.h>
using namespace std;

// optimal solution
int peak_element(vector<int> &arr, int n)
{
    if (n == 1)
        return arr[0];
    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;
        else if (arr[mid] > arr[mid - 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Index " << peak_element(arr, n);
    return 0;
}


// This problem have brute and optimal solution
// There can be multiple peak_element , you just have to written any one out of them.
