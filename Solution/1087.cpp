#include <stdio.h>
 
int main()
{
    int a, sum=0, i=1;
    scanf("%d",&a);
    while(sum<a){
       sum=sum+i;
       i++;
    }
    printf("%d",sum);
 
    return 0;
}
