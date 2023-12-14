#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int d,j,m,sisa;
	
	printf("Masukkan jumlah waktu dalam detik :");
	scanf("%d",&d);
	
	j=d/3600;
	sisa=d%3600;
	m=sisa/60;
	d=sisa%60;
	
	printf("Hasil konversi detik ke Jam : %d Jam,%d Menit,%d detik",j,m,d);
	return 0;
}
