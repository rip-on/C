#include<stdio.h>
#include<string.h>

int main()
{
    char x[] = "Water";
    char y[] = "Lemonade";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("%s\n", x);
    printf("%s\n", y);
    return 0;
}