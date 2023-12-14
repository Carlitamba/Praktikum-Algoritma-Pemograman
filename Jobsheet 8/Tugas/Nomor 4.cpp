#include <stdio.h>
#include <string.h>
float potong(float diskon,float belanja){
	return belanja-= diskon * belanja;
}
int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	float diskon,belanja,totalBayar;
	char tulisanDiskon[10];
	printf("Program Hitung Potongan\n");
	printf("Total Pembelian (Rp.)         : Rp.");
	scanf("%f",&belanja);
	if(belanja>=3000000){
		strcpy(tulisanDiskon, "35%");
		diskon=0.35;
	}else if(belanja>=1000000 && belanja<3000000){
		strcpy(tulisanDiskon, "20%");
		diskon=0.2;
	}else{
		strcpy(tulisanDiskon, "0%");
		diskon=0;
	}
	totalBayar=potong(diskon,belanja);
	
	printf("Besar Diskon                  : %s\n",tulisanDiskon);
	printf("Besar Yang Harus Dibayarkan   : Rp.%.2f",totalBayar);

	return 0;
}
