#include<stdio.h>

int main()
{
    int x, y;
    x=50;
    y=5;
    //addition
    // x+=5;
    // y-=5;
    printf("The additon is:%d\n", x);
    printf("The subtraction is:%d\n", y);
    //multiplication & Division
    // x/=y;
    printf("The division is:%d\n", x);
    // x*=y;
    printf("The multi is:%d\n", x);
    //mod
    x%=y;
    printf("The mod is : %d\n ",x);

}