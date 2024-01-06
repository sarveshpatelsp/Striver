#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &arr, int i)
{
    if (i >= arr.size() / 2)
        return;
    swap(arr[i], arr[arr.size() - i - 1]);
    f(arr, i + 1);
}

int main()
{
    vector<int> arr = {1, 4, 5, 6, 7, 8};
    f(arr, 0);

    for (auto it : arr)
        cout << it << " ";
    return 0;
}