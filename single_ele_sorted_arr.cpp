#include <bits/stdc++.h>
using namespace std;

// optimal solution
int single_element(vector<int> &arr, int n)
{
    if (n == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];

    int i = 0, ans = -1;
    while (i < n)
    {
        ans = arr[i];
        if (ans != arr[i + 1])
            return ans;
        i += 2;
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
    cout << single_element(arr, n);
    return 0;
}

// This problem have brute and optimal solution