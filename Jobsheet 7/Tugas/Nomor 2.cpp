#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	int jumlahMahasiswa;
	
	printf("Input banyak siswa : ");
	scanf("%d",&jumlahMahasiswa);
	getchar();
	char namaMahasiswa[jumlahMahasiswa][100];
	
	for(int i=0;i<jumlahMahasiswa;i++){
		printf("Input nama mahasiswa ke-%d : ",i+1);
		fgets(namaMahasiswa[i], sizeof(namaMahasiswa[i]), stdin);
	}
	
	for(int i=0;i<jumlahMahasiswa;i++){
		printf("Nama mahasiswa ke-%d : %s",i+1,namaMahasiswa[i]);
	}
	
return 0;
}
