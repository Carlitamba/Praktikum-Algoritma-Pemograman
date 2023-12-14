#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");
	char nama[50];
	printf("Hello, siapa nama lengkapmu? ");
	scanf("%[^\n]s",&nama);
//	fgets(nama,sizeof(nama),stdin);
	
	printf("Selamat Datang %s dalam pemograman C!",nama);	
}
