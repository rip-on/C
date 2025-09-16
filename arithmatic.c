#include<stdio.h>

int main()
{
    //addition
    //subtraction
    int a, b;
    a=50;
    b=4;
    printf("The sum is: %d\n",a+b);
    printf("The sum is: %d\n",a-b);
    
    //multiplication
    printf("The multiplication is: %d\n",a*b);
    printf("The multiplication is: %d\n",a/b); //0.5 is float that's why can't be displayed

    //modulus operator
    printf("The modulus of 50/4 is: %d\n",a%b);

    //increment decrement
    a++;
    b--;
    printf("Increment is %d\n",a);
    printf("Decrement is %d\n",b);
}