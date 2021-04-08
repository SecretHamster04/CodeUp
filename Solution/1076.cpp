#include <stdio.h>
int main()
{
    char a,b='a';
    scanf("%c",&a);
    do
    {
        printf("%c ",b);
        b+=1;
        a-=1;
    }
    while(a>='a');
}
