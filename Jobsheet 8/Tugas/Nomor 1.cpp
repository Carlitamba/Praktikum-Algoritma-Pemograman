#include <stdio.h>

int perkalianRekursif(int angka1,int angka2){
	
	if(angka2!=0){
		return angka1+perkalianRekursif(angka1,angka2-1);
	}else{
		return 0;
	}
	
}

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int angka1,angka2,hasil;
	
	printf("Masukkan angka pertama\t : ");
	scanf("%d",&angka1);
	printf("Masukkan angka kedua\t : ");
	scanf("%d",&angka2);
	hasil=perkalianRekursif(angka1,angka2);
	
	printf("%d x %d = %d",angka1,angka2,hasil);
	
	return 0;
}
