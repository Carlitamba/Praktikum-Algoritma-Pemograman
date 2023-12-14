#include <stdio.h>

int penjumlahan(int a,int b){
	return a + b;
}

int pengurangan(int a,int b){
	return a - b;
}

int perkalian(int a,int b){
	return a * b;
}

float pembagian(int a,int b){
	return (float)a / (float)b;
}

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int angka1,angka2;
	
	printf("Masukkan angka pertama \t:");
	scanf("%d",&angka1);
	printf("Masukkan angka kedua \t:");
	scanf("%d",&angka2);
	
	//penjumlahan
	printf("%d + %d = %d\n",angka1,angka2,penjumlahan(angka1,angka2));
	
	//pengurangan
	printf("%d - %d = %d\n",angka1,angka2,pengurangan(angka1,angka2));
	
	//perkalian
	printf("%d x %d = %d\n",angka1,angka2,perkalian(angka1,angka2));
	
	//pembagian
	printf("%d / %d = %.1f\n",angka1,angka2,pembagian(angka1,angka2));
	
	return 0;
}
