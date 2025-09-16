#include<stdio.h>

int main()
{
    int a = 30;
    int b = 50;
    int temp;

    temp = 30;
    a = 50;
    b = temp;
    
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;

}