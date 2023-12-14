#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char buff[255];
	char text[255];
	FILE *fptr;
	int i;
	//membuka file untuk ditulis
	fptr = fopen("puisi.txt", "w");
	
	for(i = 0; i<5; i++){
		//mengambil input dari user
		printf("isi baris ke-%d: ", i+1);
		fgets(text, sizeof(text), stdin);
		
		//menulis ke text ke file
		fputs(text, fptr);
	}

	printf("file berhasil ditulis\n");
	
	fclose(fptr);
	
	fptr = fopen("puisi.txt","r");
	
	while(fgets(buff, sizeof(buff), fptr)){
		printf("isi filenya sekarang: %s", buff);
	
	}
	
	//tutup file
	fclose(fptr);
	
	return 0;
}
