#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int> &arr, int n)
{
    // Optimal solution
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Size of Non Duplicate array " << remove_duplicates(arr, n) << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// This problem have Brute Optimal (B O) solutions