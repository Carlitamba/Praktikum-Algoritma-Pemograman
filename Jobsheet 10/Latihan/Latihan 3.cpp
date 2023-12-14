#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	enum hari sekarang;
	sekarang = RABU;
	
	printf("Ukuran variabel enum: %d bytes\n", sizeof(sekarang));
	
	return 0;
}
