#include <stdio.h>

int main()
{
    int arr[3], temp;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sorting the array in ascending order
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    char str[4];
    //taking the 'output order' string
    scanf("%s", str);
     
    for (int i = 0; i < 3; i++)
    {
        switch(str[i])
        {
            case 'A':
                printf("%d ", arr[0]);
                break;
            case 'B':
                printf("%d ", arr[1]);
                break;
            case 'C':
                printf("%d ", arr[2]);
        }
    }
    return 0;
}