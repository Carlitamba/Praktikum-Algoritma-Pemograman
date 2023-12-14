#include <stdio.h>
#include <string.h>
int  main( ){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	// membuat array karakter untuk menyimpan password
	char password[30];

	printf("==== Program Login ====\n");
	printf("Masukan password: ");
	scanf("%s", &password);

	// percabangan if/esLe
	if( strcmp(password, "kopi") ==0 ){	
		printf("Selamat datang bos!\n");
	} else {
		printf("Password salah, coba lagi!\n");
	}
	
	printf("Terimakasih sudah menggunakan aplikasi ini!\n");
	
	return 0;
}
