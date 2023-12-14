#include <stdio.h>
#include <string.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	char str1[] = "Agariadne";
	char str2[] = "Agariadne";
	int hasil;
	
	//membandingkan string
	hasil = strcmp(str1, str2);
	
	if(hasil == 0){
		printf("str1 dan str2 sama");
	}else{
		printf("str1 dan str2 berbeda");
	}
	
	return 0;
}
