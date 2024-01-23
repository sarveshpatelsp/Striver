#include <bits/stdc++.h>
using namespace std;

int majority_element(vector<int> &nums, int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[nums[i]]++;

    for (auto it : mp)
        if (it.second > (n / 2))
            return it.first;

    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << majority_element(nums, n);

    return 0;
}