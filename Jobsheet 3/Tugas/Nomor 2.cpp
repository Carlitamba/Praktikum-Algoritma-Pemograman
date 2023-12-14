#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	double c,k,f,r;
	
	printf("Input Suhu (Celcius)     = ");
	scanf("%lf",&c);
	k=c+273.15;
	f=(c*1.8)+32;
	r=c*0.8;


	printf("Suhu dalam Kelvin        = %.2lf",k);
	printf("\nSuhu dalam Fahrenheit    = %.2lf",f);
	printf("\nSuhu dalam Reamur        = %.2lf",r);
	

	return 0;
}
