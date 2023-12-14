#include <stdio.h>

float bagi(int a, int b){
	float hasil = (float)a / (float)b;
	return hasil;
}

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	printf("hasil 5/2: %.2f\n", bagi(5,2));
	
	return 0;
}
