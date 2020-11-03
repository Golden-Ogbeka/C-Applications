#include<stdio.h>
int main(){
	int chair, table, furniture;
	printf(" Enter the number of chairs: \n");
	scanf("%d", &chair);
	printf(" Enter the number of tables: \n");
	scanf("%d", &table);
	furniture= chair + table;
	printf("The number of furniture is %d", furniture);
	
}