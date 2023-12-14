#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	int pilihan;
	float luasPermukaan;
	printf("  Daftar Rumus Luas Permukaan");
	printf("\n=================================");
	printf("\na) Rumus Luas Permukaan Bola");
	printf("\nb) Rumus Luas Permukaan Kubus");
	printf("\nc) Rumus Luas Permukaan Balok");
	printf("\nd) Rumus Luas Permukaan Tabung");
	printf("\nPilih rumus luas permukaan: ");
	scanf("%c",&pilihan);
	
	switch(pilihan){
		case 'a':
			float rb;
			printf("Masukkan jari-jari bola: ");
			scanf("%f",&rb);
			luasPermukaan=4*3.14*rb*rb;
			printf("Luas permukaan dari bola = %.1f",luasPermukaan);
		break;
		
		case 'b':
			float s;
			printf("Masukkan sisi kubus: ");
			scanf("%f",&s);
			luasPermukaan=6*s*s;
			printf("Luas permukaan dari kubus = %.1f",luasPermukaan);
		break;
		
		case 'c':
			float p,l,t;
			printf("Masukkan panjang,tinggi,dan lebar (contoh 10 2 3) : ");
			scanf("%f %f %f",&p,&l,&t);
			luasPermukaan=2*(p*l+p*t+l*t);
			printf("Luas permukaan dari balok = %.1f",luasPermukaan);
		break;
		
		case 'd':
			float rt,tt;
			printf("Masukkan jari-jari dan tinggi tabung (contoh 7 10): ");
			scanf("%f %f",&rt,&tt);
			luasPermukaan=2*3.14*rt*(rt+tt);	
			printf("Luas permukaan dari tabung = %.1f",luasPermukaan);
		break;
		
		default:
			printf("Pilihan tidak tersedia");
	}
	
	return 0;
}
