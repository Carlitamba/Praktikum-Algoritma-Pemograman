#include <stdio.h>

int sum(int n);

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int number, result;
	
	printf("Enter a positive integer: ");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("sum = %d", result);

	return 0;
}

int sum(int num){	
	if (num!=0)
		return num + sum(num-1);
	else
		return num;
}
