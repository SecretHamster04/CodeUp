#include <stdio.h>
int main()
{
    int a, b, c=0;
    scanf("%d", &b);
    for(a=1; ;a++)
    {
        c+=a;
        if (c>=b) break;
    }
    printf("%d", a);
    return 0;
}


