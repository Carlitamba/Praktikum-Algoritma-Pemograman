#include <stdio.h>
#include <string.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char username[]="carli";
	char password[]="carligtg123";
	
	char inputUsername[100];
	char inputPassword[100];
	
	do{	
	printf("Masukkan username anda : ");
	gets(inputUsername);
	printf("Masukkan password anda  : ");
	gets(inputPassword);
	
		if(strcmp(username,inputUsername)!=0 || strcmp(password,inputPassword)!=0){
		printf("\nusername atau password salah\n\n");
		
		}
   }while(strcmp(username,inputUsername)!=0||strcmp(password,inputPassword)!=0);
	
	printf("\nberhasil login");
	return 0;
}
