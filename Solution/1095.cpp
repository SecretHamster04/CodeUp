
#include<stdio.h>
 
int main()
{
 
 
    int a[10000] = { 0, };
    int num;
 
    scanf("%d", &num);
 
    for (int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    
    int temp;
 
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
 
    printf("%d", a[0]);
 
 
    return 0;
}
