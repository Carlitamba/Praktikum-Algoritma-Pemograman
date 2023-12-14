#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int presensi=85;
	int praktek=65;
	int uts=80;
	int uas=75;
	
	float nilaiAkhir=(float)presensi*10/100+(float)praktek*20/100+(float)uts*30/100+(float)uas*40/100;
	
	printf("Nilai Presensi : %d",presensi);
	printf("\nNilai Praktek  : %d",praktek);
	printf("\nNilai UTS      : %d",uts);
	printf("\nNilai UAS      : %d",uas);
	printf("\nNilai akhir    : %.1f",nilaiAkhir);
	return 0;
}
