#include <bits/stdc++.h>
using namespace std;

void union_arr(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{
    // Brute solution
    set<int> st;
    for (int i = 0; i < n1; i++)
        st.insert(arr1[i]);
    for (int j = 0; j < n2; j++)
        st.insert(arr2[j]);
    for (auto it : st)
        cout << it << " ";
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1), arr2(n2);
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    union_arr(arr1, arr2, n1, n2);
    return 0;
}

// This problem have Brute Optimal (B O) solutions