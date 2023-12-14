#include <stdio.h>
int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");
	//tugas nomor 2
	char nama2[10];
	int NIM;
	char prodi[10];
	char fakultas[10];
	int nilaiPraktikum;
	int nilaiUTS;
	int nilaiUAS;
	int nilaiAkhir;
	
	printf("Nama     : ");
	scanf("%[^\n]s",&nama2);
	printf("NIM      : ");
	scanf("%d",&NIM);
	printf("Prodi    : ");
	scanf("%s",prodi);
	printf("Fakultas : ");
	scanf("%s",fakultas);
	printf("Nilai Praktikum  : ");
	scanf("%d",&nilaiPraktikum);
	printf("Nilai UTS        : ");
	scanf("%d",&nilaiUTS);
	printf("Nilai UAS        : ");
	scanf("%d",&nilaiUAS);

	nilaiAkhir=0.3*nilaiPraktikum+0.3*nilaiUTS+0.4*nilaiUAS;

	printf("Nilai Akhir      : %d",nilaiAkhir);
return 0;
}
