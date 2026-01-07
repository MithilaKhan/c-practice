#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int isPalindrome = 1;
    int arr[n], i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n/2; i++) 
    // eikhane if condition check kora hocche 1st num  r last num same kina. then 2nd & last 2nd  same kina. r n/2 excute ke half korbe karon aita eksathe 2 ta index niye kaj korteche 
    {

        if (arr[i] != arr[n - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}