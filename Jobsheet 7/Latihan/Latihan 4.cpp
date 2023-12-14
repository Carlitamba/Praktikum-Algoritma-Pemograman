#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	int marks[10], i, n, sum = 0,average;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for(i = 0; i<n; i++){
		printf("Enter number%d : ",i+1);
		scanf("%d", &marks[i]);
		
		sum += marks[i];
	}
	average = sum/n;
	printf("Average = %d",average);
	return 0;
}
