#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int a,b;
	
	printf("Inputkan nilai a: ");
	scanf("%i", &a);
	
	printf("Inputkan nilai b: ");
	scanf("%i", &b);
	
	printf("Hasil a + b: %i\n", a + b);
	printf("Hasil a - b: %i\n", a - b);
	printf("Hasil a * b: %i\n", a * b);
	printf("Hasil a / b: %.2f\n", (float)a / (float)b);
	printf("Hasil a %% b: %i\n", a % b);
	return 0;
}
