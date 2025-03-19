#include<stdio.h>
#include<string.h>


int main()
{
    char x[15] = "Water";
    char y[15] = "Soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("%s\n",x);
    printf("%s\n",y);
    return 0;

}
// Here the y variable carry smaller lenght value; so we need to set the value