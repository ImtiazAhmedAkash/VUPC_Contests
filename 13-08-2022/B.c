#include <stdio.h>

int main()
{
    int total, height, width;

    scanf("%d %d %d", &total, &height, &width);

    // finding out the largest height and width
    if ((total - height) > height)
    {
        height = total - height;
    }

    if ((total - width) > width)
    {
        width = total - width;
    }

    printf("%d", height * width * 4);
    return 0;
}