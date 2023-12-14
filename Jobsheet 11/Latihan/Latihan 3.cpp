#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");
	char buff[255];
	FILE *fptr;
	
	//membuka file
	if ((fptr = fopen("puisi.txt","r")) == NULL){
		printf("Error: File tidak ada!");
		//Tutup program karena file gak ada.
		exit(1);
	}
	
	//baca isi file dengan gets lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("%s", buff);
	}
	//tutup file
	fclose(fptr);
	
	return 0;
}

