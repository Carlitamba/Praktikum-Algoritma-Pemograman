#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	//deklarasi array of char
	char nama[20];
	
	printf("Masukkan nama Anda: ");
	gets(nama);
	
	printf("Hello, %s. Salam kenal.",nama);
	
	return 0;
}
