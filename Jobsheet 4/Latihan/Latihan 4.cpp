#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int a,b;
	
	a = 5;
	b = 10;
	
	b += a ; // ini sama seperti b = b + a
	printf("Hasil b += adalah %d\n", b);

	b -= a ; // ini sama seperti b = b - a
	printf("Hasil b -= adalah %d\n", b);	

	b *= a ; // ini sama seperti b = b * a
	printf("Hasil b *= adalah %d\n", b);

	b /= a ; // ini sama seperti b = b / a
	printf("Hasil b /= adalah %d\n", b);
	
	b %= a ; // ini sama seperti b = b % a
	printf("Hasil b %%= adalah %d\n", b);
	
	return 0;			
}
