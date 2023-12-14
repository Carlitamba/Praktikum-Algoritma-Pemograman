#include <stdio.h>
#include <string.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char nama[] = "Carli Tamba";
	int panjang_nama;
	
	//menghitung panjang nama
	panjang_nama = strlen(nama);
	
	printf("Nama\t: %s\n", nama);
	printf("Panjang\t: %d Karakter\n", panjang_nama);
	
	return 0;
}
