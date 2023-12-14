#include <stdio.h>

typedef struct MAHASISWA{
	char nama[20];
	char nim[20];
	char jurusan[20];
	char programStudi[20];
}MAHASISWA;

void inputData(MAHASISWA mahasiswa[],int jumlahMahasiswa){
	
	for(int i = 0;i < jumlahMahasiswa;i++){
		printf("\nMasukkan data mahasiswa ke-%d\n",i+1);
		printf("Nama\t\t: ");
		fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
		printf("NIM \t\t: ");	
		fgets(mahasiswa[i].nim, sizeof(mahasiswa[i].nim), stdin);
		printf("Jurusan \t: ");
		fgets(mahasiswa[i].jurusan, sizeof(mahasiswa[i].jurusan), stdin);
		printf("Program Studi \t: ");
		fgets(mahasiswa[i].programStudi, sizeof(mahasiswa[i].programStudi), stdin);
		
	}
}

void tulisData(FILE *fptr,MAHASISWA mahasiswa[],int jumlahMahasiswa){
	fptr = fopen("datamahasiswa.txt","w");
	for(int i = 0;i < jumlahMahasiswa;i++){
		fprintf(fptr,"Mahasiswa ke-%d\n",i+1);
		fprintf(fptr,"Nama \t\t: %s",mahasiswa[i].nama);
		fprintf(fptr,"NIM \t\t: %s",mahasiswa[i].nim );
		fprintf(fptr,"Jurusan \t: %s",mahasiswa[i].jurusan);
		fprintf(fptr,"Program Studi \t: %s",mahasiswa[i].programStudi);
	}
	fclose(fptr);
}
int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	FILE *fptr;
	
	int jumlahMahasiswa;
	printf("Masukkan jumlah mahasiswa : ");
	scanf("%d",&jumlahMahasiswa);getchar();
	
	MAHASISWA mahasiswa[jumlahMahasiswa];
	
	inputData(mahasiswa,jumlahMahasiswa);
	
	tulisData(fptr,mahasiswa,jumlahMahasiswa);
	return 0;
}
