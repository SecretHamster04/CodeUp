#include <stdio.h>

int main()
{
    int a[24]={}, n, n2;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &n2);
        a[n2] += 1;
    }

    for(int i = 1; i <= 23; i++){
        printf("%d ", a[i]);
    }
}
