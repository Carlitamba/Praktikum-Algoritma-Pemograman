#include <stdio.h>

int main (){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char ulangi = 'y';
	int counter = 0;
	
	//perulangan while
	while(ulangi == 'y'){
		printf("Apakah kamu mau mengulang?\n");
		printf("Jawab (y/t): ");
		scanf(" %c", &ulangi);
		//increment counter
		counter++;
	}
	
	printf("\n\n--------------\n");
	printf("Perulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
	
	return 0;
}
