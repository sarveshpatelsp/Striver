#include <iostream>
#include <climits>
int reverse(int x)
{
    long reverse = 0;
    while (x != 0)
    {
        int last = x % 10;
        reverse = (reverse * 10) + last;
        x = x / 10;
    }
    if (reverse > INT_MAX || reverse < INT_MIN)
        return 0;
    return (int)reverse;
}

int main()
{
    int x = 423;
    cout << reverse(x);
    return 0;
}
