#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	int tebakan,komputer,counter=0;
	char ulang = 'y';
	srand(time(0));
	komputer=rand()%21;
	
	printf("======================================\n");
	printf("\tPERMAINAN TEBAK NOMOR\n");
	printf("======================================\n");
	do{
		counter ++;
		printf("\nMasukkan Nomor Tebakan 1-20 : ");
		scanf("%d",&tebakan);
		
		if(komputer > tebakan){
			printf("Nomor saya lebih besar!\n");
		}else if(komputer < tebakan){
			printf("Nomor saya lebih kecil!\n");
		}else if(komputer == tebakan){
			printf("Selamat, anda benar!\n");
			printf("Anda berhasil menebak nomor pada percobaan ke-%d\n",counter);
			counter = 0;
			komputer=rand()%21;
			printf("\nApakah anda ingin mencoba lagi (y/n) : ");
		 	scanf(" %c",&ulang);
		}
	}while(ulang != 'n');
	
	printf("Anda telah keluar dari permainan\nTerima Kasih!");
	
	return 0;
}
