#include <iostream>
using namespace std;

int countDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        int last_digit = num % 10;
        count++;
        num = num / 10;
    }
    return count;
}

int main()
{
    int num = 121;
    int ans = countDigits(num);
    cout << ans;
    return 0;
}