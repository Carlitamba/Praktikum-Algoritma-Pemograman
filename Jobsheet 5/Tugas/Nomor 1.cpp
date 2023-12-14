#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	int angka1,angka2;
	char operasi;
	printf("         Kalkulator Sederhana");
	printf("\n==================================== ");
	printf("\n\na) Penjumlahan");
	printf("\nb) Pengurangan");
	printf("\nc) Perkalian");
	printf("\nd) Pembagian");
	printf("\ne) Hasil Bagi");
	printf("\nPilih salah satu operasi yang anda inginkan: ");
	scanf("%c",&operasi);
	
	switch(operasi){
		case 'a':
			printf("Masukkan angka pertama :");
			scanf("%d",&angka1);
			printf("Masukkan angka kedua   :");
			scanf("%d",&angka2);
			printf("Hasil penjumlahan dari angka %d dan %d = %d",angka1,angka2,angka1+angka2);
		break;
		
		case 'b':
			printf("Masukkan angka pertama :");
			scanf("%d",&angka1);
			printf("Masukkan angka kedua   :");
			scanf("%d",&angka2);
			printf("Hasil pengurangan dari angka %d dan %d = %d",angka1,angka2,angka1-angka2);
		break;
		
		case 'c':
			printf("Masukkan angka pertama :");
			scanf("%d",&angka1);
			printf("Masukkan angka kedua   :");
			scanf("%d",&angka2);
			printf("Hasil perkalian dari angka %d dan %d = %d",angka1,angka2,angka1*angka2);
		break;
		
		case 'd':
			printf("Masukkan angka pertama :");
			scanf("%d",&angka1);
			printf("Masukkan angka kedua   :");
			scanf("%d",&angka2);
			printf("Hasil pembagian dari angka %d dan %d = %.1f",angka1,angka2,(float)angka1/(float)angka2);
		break;
		
		case 'e':
			printf("Masukkan angka pertama :");
			scanf("%d",&angka1);
			printf("Masukkan angka kedua   :");
			scanf("%d",&angka2);
			printf("Hasil sisa pembagian dari angka %d dan %d = %d",angka1,angka2,(int)angka1 % (int)angka2);
		break;
		
		default:
			printf("Pilihan tidak tersedia");
		
	}
	return 0;
	
}
