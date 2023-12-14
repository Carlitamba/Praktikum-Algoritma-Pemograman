#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char buff[255];
	char text[255];
	FILE *fptr;
	
	//membuka file
	fptr = fopen("puisi.txt", "w");
	
	//mengambil input dari user
	printf("inputkan isi file: ");
	fgets(text, sizeof(text), stdin);
	
	//menulis ke text ke file
	fputs(text, fptr);
	
	printf("file berhasil ditulis\n");
	
	fclose(fptr);
	
	return 0;
}

