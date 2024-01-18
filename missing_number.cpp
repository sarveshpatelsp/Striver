#include <iostream>
using namespace std;

int missing_number(int arr[], int n)
{
    // Brute Solution
    int missing = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            missing = i;
            break;
        }
    }
    return missing;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << missing_number(arr, n);

    return 0;
}

// Problem Have Brute Better Optimal(BBO) solutions