#include<stdio.h>
main(){
	int arr[10];
	int i;
	int sum=0;
	printf("Enter your ten values for the array: ");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<10; i++)
	{
		printf("The value for arr[%d] is: %d\n", i, arr[i]);
	}
	for(i=0; i<10; i++)
	{
		sum=sum + arr[i];
	}
	printf("\nAnd the sum of the elements in the array is: %d", sum);
	return 0;
}