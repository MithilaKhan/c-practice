#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); 

    int arr[n], i; 
    long long int sum=0 ;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++){
        sum += (long long int)arr[i];
    }

    if (sum < 0){
        sum = -sum;
    }

    printf("%lld", sum);

    return 0;
}