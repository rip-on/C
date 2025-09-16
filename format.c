#include<stdio.h>

int main()
{
    float item1 = 5.00;
    float item2 = 15.00;
    float item3 = 40.00;

    printf("\nItem1 price:$%8.2f:",item1);
    printf("\nItem2 price:$%8.2f:",item2);
    printf("\nItem3 price:$%8.2f:",item3);

    printf("\nItem1 price:$%-5.2f:",item1);
    printf("\nItem2 price:$%-5.2f:",item2);
    printf("\nItem3 price:$%-5.2f:",item3);



    return 0;
}