#include <stdio.h>

float luasLingkaran(float phi,float r){
	return phi * r * r;
}

float kelilingLingkaran(float phi,float r){
	return 2 * phi * r;
}
int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	float phi=3.14,r;
	
	printf("Masukkan jari-jari lingkaran : ");
	scanf("%f",&r);
	printf("Luas lingkaran               = %.2f\n",luasLingkaran(phi,r));
	printf("Keliling lingkaran           = %.2f",kelilingLingkaran(phi,r));
	
	return 0;
}
