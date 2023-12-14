#include <stdio.h>
#include <string.h>
int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char title[] = "Belajar String.h pada Bahasa C";
	char title_copy[20];
	
	//copy string title ke title_copy
	strcpy(title_copy, title);
	
	//maka sekarang title_copy akan berisi:
	printf("isi title_copy\t: %s\n", title_copy);
	
	return 0;
}
