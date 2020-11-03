#include<stdio.h>
// This program  is to check is a number imputed is an even number
main(){
	int number;
	printf("Enter a number: \n");
	scanf("%d", &number);
	if(number % 2 =0)
	{
		printf("%d is an even number \n", number);
	}
	else
	{
		printf("%d is an odd number \n", number);
	}
	return 0;
}
//Program didn't run