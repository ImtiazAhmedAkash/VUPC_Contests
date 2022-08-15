#include <stdio.h>

int main()
{
    int problem, time;
    scanf("%d %d", &problem, &time);

    // remaining time to solve the problem
    time = 240 - time;

    int sum = 0;
    for (int i = 1; i <= problem; i++)
    {
        sum = sum + (5 * i);

        // if sum is equal to the remaining time,
        // or all the problems are solved and there is still time left
        // he can solve (in total) i number of problems
        if (sum == time || (i == problem && sum < time))
        {
            printf("%d\n", i);
            break;
        }

        // if the sum is greater than remaining time, he can't finish solving the i-th problem
        // that means he will solve i-1 problems in total
        if (sum > time)
        {
            printf("%d\n", i - 1);
            break;
        }
    }
    return 0;
}