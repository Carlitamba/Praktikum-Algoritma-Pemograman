#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	const float uangPenukar=2500000;
	float rupiahKeDollar;
	const float satuDollar=14250;
	rupiahKeDollar=uangPenukar/satuDollar;
	printf("1$ bernilai Rp%.f",satuDollar);
	printf("\nBanyak uang rupiah yang akan ditukar ke dollar = Rp.%.f",uangPenukar);
	printf("\nUang setelah ditukar dari rupiah ke dollar     = %f$",rupiahKeDollar);
	return 0;
}
