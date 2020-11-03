#include<stdio.h>
int main(){
	int value[]={};
	int total;
	printf("Enter the value of the first array: ");
	scanf("%d", &value[0]);
	printf("Enter the value of the second array: ");
	scanf("%d", &value[1]);
	total= value[0] + value[1];
	printf("The total is: %d ", total);
	return 0;
}