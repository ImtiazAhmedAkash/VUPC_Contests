#include <stdio.h>
int main()
{
    int cost, amount;
    long long int money;
    scanf("%d %lld %d", &cost, &money, &amount);

    long long int bill = 0;
    for (int i = 1; i <= amount; i++)
    {
        bill = bill + (cost * i);
    }
    
    if (bill > money)
    {
        // if bill is greater than his money, he will take loan 
        printf("%lld\n", bill - money);
    }
    else
    {
        // otherwise loan is 0
        printf("0\n");
    }
    return 0;
}