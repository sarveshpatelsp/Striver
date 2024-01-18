#include <iostream>
using namespace std;

int single_number(int arr[], int n)
{
    // Optimal Solution
    int XOR = 0;
    for (int i = 0; i < n; i++)
        XOR = XOR ^ arr[i];

    return XOR;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << single_number(arr, n);

    return 0;
}

// Problem Have Brute Better Optimal(BBO) solutions