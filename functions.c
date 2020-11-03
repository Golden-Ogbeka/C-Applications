#include <stdio.h>
//Program to print the total in all rooms on C200 floor.

int total(int,int,int,int,int,int,int,int);
int total(int rm1, int rm2, int rm3, int rm4, int rm5, int rm6, int rm7, int rm8)
//you can use any parameter for the formal parameter even the actual parameter can be used
{
	int population;
	population=rm1 + rm2 + rm3 + rm4 + rm5 + rm6 + rm7 + rm8;
	return population;
}
main(){
//This program is used if there are predefined values
	int value;
	int room1=4;
	int room2=3;
	int room3=4;
	int room4=4;
	int room5=4;
	int room6=3;
	int room7=3;
	int room8=3;
	//Then call the other function into the main function
	value=total(room1,room2,room3,room4,room5,room6,room7,room8);
	printf("The total number of students is: %d\n", value);
	return 0; //not necessary
}
