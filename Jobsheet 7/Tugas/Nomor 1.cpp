#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	float nilai[20],nilaiRataRata;
	int jumlahMahasiswa=20;
	
	for(int i=0;i<jumlahMahasiswa;i++){
		printf("Masukkan nilai mahasiswa ke-%d : ",i+1);
		scanf("%f",&nilai[i]);
	}
	
	int length = sizeof(nilai) / sizeof(*nilai);	 
	
	for(int i=0;i<length;i++){
	 	nilaiRataRata+=nilai[i];
	 }
	 
	 printf("Nilai Rata Rata dari 20 mahasiswa : %.2f",nilaiRataRata/length);
	 return 0;
	
}
