#include<stdio.h>

int main()
{
    // char name[25];
    // int age;

    // printf("What's is your name?: ");
    // printf("How old are you?:\n");
    // scanf("%s ", &name);
    // scanf("%d",&age);
    // printf("\nHello %s ! ",name);
    // printf("\nYou are %d years old.",age);

    // return 0;
    
//Name input
    char name[25];
    int age;

    printf("\nWhat's your name?:");
    scanf("%s",&name);

    printf("How old are you?:");
    scanf("%d",&age);

    printf("Hi %s! How are You?\n",name);
    printf("You are %d years old\n",age);

    return 0;
}