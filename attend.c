#include<stdio.h>
/*Program to calculate the amount of people that came for service*/
main(){
	int attend;
	int pet;
	int elect;
	int mis;
	int archi;
	int chem;
	printf("Enter the number of Students from Pet. :  \n");
	scanf("%d", &pet);
	printf("Enter the number of Students from Elect. :  \n");
	scanf("%d", &elect);
	printf("Enter the number of Students from MIS. :  \n");
	scanf("%d", &mis);
	printf("Enter the number of Students from Archi. :  \n");
	scanf("%d", &archi);
	printf("Enter the number of Students from Chem. :  \n");
	scanf("%d", &chem);
	attend=pet+elect+mis+archi+chem;
	printf("The number of students that attended Chapel Service is : %d\n", attend);
	return 0;
}