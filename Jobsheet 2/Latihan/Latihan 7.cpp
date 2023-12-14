#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");
	char nama[50],email[50];
	
	printf("Nama: ");
	fgets(nama,sizeof(nama),stdin);
	
	printf("Email: ");
	fgets(email,sizeof(email),stdin);
	
	printf("\n--------------------------------\n");
	printf("Nama Anda: %s",nama);
	printf("Alamat email: %s",email);
	
	return 0;
}
