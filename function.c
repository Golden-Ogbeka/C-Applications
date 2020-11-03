#include<stdio.h>
//Program to print the total in all rooms on C200 floor.
//This program expects the user to enter the needed values
int total(int,int,int,int,int,int,int,int); //This is to create the function prototype/declare the function
int total(int rm1, int rm2, int rm3, int rm4, int rm5, int rm6, int rm7, int rm8)  //Now Describe or implement the function
{
	int population;
	//do the solution here
	population=rm1 + rm2 + rm3 + rm4 + rm5 + rm6 + rm7 + rm8;
		printf("The total number of students is: %d\n", population);
}
main()  //Bring in the main function
{
	//declare the values
	int room1;
	int room2;
	int room3;
	int room4;
	int room5;
	int room6;
	int room7;
	int room8;
	//request for the values
	printf("Enter the number of students in C201: \n");
	scanf("%d", &room1);
	printf("Enter the number of students in C202: \n");
	scanf("%d", &room2);
	printf("Enter the number of students in C203: \n");
	scanf("%d", &room3);
	printf("Enter the number of students in C204: \n");
	scanf("%d", &room4);
	printf("Enter the number of students in C205: \n");
	scanf("%d", &room5);
	printf("Enter the number of students in C206: \n");
	scanf("%d", &room6);
	printf("Enter the number of students in C207: \n");
	scanf("%d", &room7);
	printf("Enter the number of students in C208: \n");
	scanf("%d", &room8);
	//next just import the other function into the main function
	total(room1,room2,room3,room4,room5,room6,room7,room8);
	//Since you have printed the value in line 8 , you don't need to print again
}
