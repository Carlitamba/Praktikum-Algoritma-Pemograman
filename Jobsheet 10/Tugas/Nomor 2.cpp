#include <stdio.h>

typedef struct TanggalLahir{
	int tanggal;
	int bulan;
	int tahun;
};

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	TanggalLahir tglLahir;
	
	printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tglLahir.tanggal, &tglLahir.bulan, &tglLahir.tahun);

	if ((tglLahir.bulan == 3 && tglLahir.tanggal >= 21) || (tglLahir.bulan == 4 && tglLahir.tanggal <= 19)) {
        printf("Zodiak Anda adalah : ARIES\n");
    } else if ((tglLahir.bulan == 4 && tglLahir.tanggal >= 20) || (tglLahir.bulan == 5 && tglLahir.tanggal <= 20)) {
        printf("Zodiak Anda adalah : TAURUS\n");
    } else if ((tglLahir.bulan == 5 && tglLahir.tanggal >= 21) || (tglLahir.bulan == 6 && tglLahir.tanggal <= 20)) {
        printf("Zodiak Anda adalah : GEMINI\n");
    } else if ((tglLahir.bulan == 6 && tglLahir.tanggal >= 21) || (tglLahir.bulan == 7 && tglLahir.tanggal <= 22)) {
        printf("Zodiak Anda adalah : CANCER\n");
    } else if ((tglLahir.bulan == 7 && tglLahir.tanggal >= 23) || (tglLahir.bulan == 8 && tglLahir.tanggal <= 22)) {
        printf("Zodiak Anda adalah : LEO\n");
    } else if ((tglLahir.bulan == 8 && tglLahir.tanggal >= 23) || (tglLahir.bulan == 9 && tglLahir.tanggal <= 22)) {
        printf("Zodiak Anda adalah : VIRGO\n");
    } else if ((tglLahir.bulan == 9 && tglLahir.tanggal >= 23) || (tglLahir.bulan == 10 && tglLahir.tanggal <= 22)) {
        printf("Zodiak Anda adalah : LIBRA\n");
    } else if ((tglLahir.bulan == 10 && tglLahir.tanggal >= 23) || (tglLahir.bulan == 11 && tglLahir.tanggal <= 21)) {
        printf("Zodiak Anda adalah : SCORPIO\n");
    } else if ((tglLahir.bulan == 11 && tglLahir.tanggal >= 22) || (tglLahir.bulan == 12 && tglLahir.tanggal <= 21)) {
        printf("Zodiak Anda adalah : SAGITTARIUS\n");
    } else if ((tglLahir.bulan == 12 && tglLahir.tanggal >= 22) || (tglLahir.bulan == 1 && tglLahir.tanggal <= 19)) {
        printf("Zodiak Anda adalah : CAPRICORN\n");
    } else if ((tglLahir.bulan == 1 && tglLahir.tanggal >= 20) || (tglLahir.bulan == 2 && tglLahir.tanggal <= 18)) {
        printf("Zodiak Anda adalah : AQUARIUS\n");
    } else if ((tglLahir.bulan == 2 && tglLahir.tanggal >= 19) || (tglLahir.bulan == 3 && tglLahir.tanggal <= 20)) {
        printf("Zodiak Anda adalah : PISCES\n");
    }
    
    return 0;
};
