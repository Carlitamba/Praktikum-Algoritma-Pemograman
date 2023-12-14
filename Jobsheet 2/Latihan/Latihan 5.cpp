#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char nama[20],web_address[30];
	
	printf("Nama: ");
	scanf("%[^\n]s",&nama);
	
	printf("Alamat Web: ");
	scanf("%s",&web_address);
	
	printf("\n--------------------------------\n");
	printf("Nama yang diinputkan : %s\n",nama);
	printf("Alamat Web yang diinputkan: %s\n",web_address);
	
	return 0;
}
