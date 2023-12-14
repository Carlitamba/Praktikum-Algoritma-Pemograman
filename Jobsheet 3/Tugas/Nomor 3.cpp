#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	double v,lp;
	const float phi=3.14;
	int d=12;
	int r=d/2;

	v=4*phi*r*r*r/3;
	lp=4*phi*r*r;
	printf("Diameter bola basket       = %d ",d);
	printf("\nJari-jari bola basket      = %d ",r);
	printf("\nVolume bola basket         = %.2lf",v);
	printf("\nLuas permukaan bola basket = %.2lf",lp);
	
	return 0;
}
