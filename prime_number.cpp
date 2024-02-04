#include <bits/stdc++.h>
using namespace std;

int find_prime(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
                count++;
        }
    }
    if (count == 2)
        return 1;
    return 0;
}

int main()
{
    int n = 14;
    cout << find_prime(n);
    return 0;
}
