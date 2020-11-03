#include<stdio.h>

int main()
{
char name[10];
printf("Hi, what is your name: \n");
scanf("%s",&name);
printf("\n\n\aWelcome %s \nLet's be friends\n", name);

return 0;
}