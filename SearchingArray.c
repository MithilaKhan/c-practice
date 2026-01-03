#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);

    int arr[size], num, i, find = -1;

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num);

    for (i = 0; i < size; i++)
    {

        if (arr[i] == num)
        {
            find = i;
            break;
        }
    }
    printf("%d", find);

    return 0;
}