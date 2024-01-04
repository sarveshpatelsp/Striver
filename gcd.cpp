#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    int gcd = 1;
    int num = min(n1, n2);
    for (int i = 1; i <= sqrt(num); i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
            gcd = i;
    }
    return gcd;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2);
    return 0;
}