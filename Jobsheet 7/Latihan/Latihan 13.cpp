#include <stdio.h>
#include <string.h>
int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char nama[] = "Agariadne D. S.";
	char gelar[] = ", S.Kom., M.Pd.T.";
	
	strcat(nama, gelar);
	
	printf("Nama Lengkap\t: %s\n",nama);
	
	return 0;
}
