#include <stdio.h>
int main()
{
    int mb, month, value, sum = 0;

    scanf("%d %d", &mb, &month);

    for (int i = 0; i < month; i++)
    {
        scanf("%d", &value);
        // calculate all the used mb
        sum += value;
    }

    // the next months data is added, i.e. (month + 1) * mb
    // remaining mb is total mb - used mb
    sum = (month + 1) * mb - sum;

    printf("%d\n", sum);

    return 0;
}