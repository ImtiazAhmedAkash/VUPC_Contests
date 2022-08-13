#include <stdio.h>

int main()
{
    int loop, number;

    scanf("%d", &loop);

    for (int i = 0; i < loop; i++)
    {
        scanf("%d", &number);
        // the last digit of factorial of number >= 5 is 0
        if (number >= 5)
        {
            printf("0\n");
        }
        // the last digit of factorial of number 3 is 6
        else if (number == 3)
        {
            printf("6\n");
        }
        // the last digit of factorial of number (1,2,4) are themselves
        else
            printf("%d\n", number);
    }

    return 0;
}