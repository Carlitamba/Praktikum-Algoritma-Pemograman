#include <stdio.h>
#include <string.h>

typedef struct MAHASISWA{
	char npm[20];
	char nama[20];
	char tglLahir[20];
	char alamat[20];
	char noHp[20];
}MAHASISWA;

void tampilData(MAHASISWA mahasiswa[],int jumlahData){	
	for(int i = 0;i <= jumlahData;i++){
		mahasiswa[i].npm[strcspn(mahasiswa[i].npm, "\n")] = 0;
		mahasiswa[i].nama[strcspn(mahasiswa[i].nama, "\n")] = 0;
		mahasiswa[i].tglLahir[strcspn(mahasiswa[i].tglLahir, "\n")] = 0;
		mahasiswa[i].alamat[strcspn(mahasiswa[i].alamat, "\n")] = 0;
		mahasiswa[i].noHp[strcspn(mahasiswa[i].noHp, "\n")] = 0;
		printf("%s      ",mahasiswa[i].npm);
		printf("%s      ",mahasiswa[i].nama);
		printf("%s      ",mahasiswa[i].tglLahir);
		printf("%s     	",mahasiswa[i].alamat);
		printf("%s    \n",mahasiswa[i].noHp);
	}
}
int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");
	MAHASISWA mahasiswa[100];
	int i = 0;
	char ulang;
	do{	
		printf("\nNPM \t\t: ");
		fgets(mahasiswa[i].npm, sizeof(mahasiswa[i].npm), stdin);
		printf("NAMA \t\t: ");	
		fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
		printf("TGL LAHIR\t: ");
		fgets(mahasiswa[i].tglLahir, sizeof(mahasiswa[i].tglLahir), stdin);
		printf("ALAMAT\t\t: ");
		fgets(mahasiswa[i].alamat, sizeof(mahasiswa[i].alamat), stdin);
		printf("HP \t\t: ");
		fgets(mahasiswa[i].noHp, sizeof(mahasiswa[i].noHp), stdin);
		printf("Mau memasukkan data lagi[y/t]?");
		scanf(" %c",&ulang);getchar();
		i++;
	}while(ulang == 'y');
	
	printf("\n\n");
	tampilData(mahasiswa,i);
	return 0;
}
