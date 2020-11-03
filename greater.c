#include<stdio.h>
//Program to print the larger between two numbers using two functions
// Am using float for the two numbers
float great(float,float);
float great(float num1,float num2){
	if(num1>num2){
		//If you want it to appear in 2 d.p you use %.2f or %0.2f
	// I want it to appear in 1 d.p
	printf("The greater number is %0.1f\n", num1);
	}
	else
		printf("The greater number is %.1f\n", num2);
}
//Now make the main function
main()

{
	float first_number;
	float second_number;
	printf("Enter the first number: ");
	scanf("%f", &first_number);
	printf("Enter the second number: ");
	scanf("%f", &second_number);
	great(first_number,second_number);
}
//That's all
