#include <iostream>
using namespace std;


bool palindrome(int n)
{
    int copy = n;
    int rev = 0;
    while (copy > 0)
    {
        int last = copy % 10;
        rev = (rev * 10) + last;
        copy = copy / 10;
    }
    if (rev == n)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << palindrome(n);
    return 0;
}
