#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    // one array is for the home jersey code and the other is for away jersey code
    int home[n], away[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &home[i], &away[i]);
    }

    // if the home jersey is the same as the away jersey, the home team will wear the guest jersey
    // for every home jersey color code, we will compare the away jersey color code with them
    // the total number of same color home-away jersey is the answer
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (home[i] == away[j])
                count++;
        }
    }

    printf("%d\n", count);
    return 0;
}