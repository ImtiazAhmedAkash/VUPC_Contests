#include <stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    l = k * l; // total ml
    c = c * d; // total number of  slices

    int count = 0;

    // while toast combination satisfies
    while ((l - nl >= 0) && (c - 1 >= 0) && (p - np >= 0))
    {
        l = l - nl; // remaining ml
        c = c - 1;  // remaining slices
        p = p - np; // remaining salt
        count++;    // total number of toast
    }

    printf("%d\n", count / n); // toast for each of the friends
    return 0;
}