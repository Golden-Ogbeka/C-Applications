#include<stdio.h>
//Program to calculate the number of toilets on a floor
int toilet(int,int,int,int);
int toilet(int floor1, int floor2, int floor3, int floor4){
	printf("How many toilets are in 100 floor: ");
	scanf("%d", &floor1);
	printf("How many toilets are in 200 floor: ");
	scanf("%d", &floor2);
	printf("How many toilets are in 300 floor: ");
	scanf("%d", &floor3);
	printf("How many toilets are in 400 floor: ");
	scanf("%d", &floor4);
	int total=floor1+floor2+floor3+floor4;
	printf("The total toilets in the wing is: %d", total);
	
}
main(){
	//make new variables to represent the ones used in the other function
	int first_floor;
	int second_floor;
	int third_floor;
	int fourth_floor;
	toilet(first_floor, second_floor, third_floor, fourth_floor);
}