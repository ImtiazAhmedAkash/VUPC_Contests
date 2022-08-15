#include <stdio.h>

int main()
{
    long long int x;
    scanf("%lld", &x);

    // the elephant can cross 5 points max
    if (x % 5 == 0)
    {
        printf("%lld\n", x / 5);
    }
    else
    {
        printf("%lld\n", (x / 5) + 1);
    }

    return 0;
}