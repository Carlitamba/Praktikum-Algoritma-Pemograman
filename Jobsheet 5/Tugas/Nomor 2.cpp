#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	int totalPembelian;
	
	printf("      TOSERBA");
	printf("\n==================");
	printf("\nMasukkan total pembelian :Rp. ");
	scanf("%d",&totalPembelian);
	
	if(totalPembelian<=75000 && totalPembelian>=1){
		totalPembelian-=totalPembelian*5/100;	
		printf("Selamat anda mendapatkan diskon sebesar 5%% ");
	}else if(totalPembelian>125000){
		totalPembelian-=totalPembelian*25/100+5000;
		printf("Selamat anda mendapatkan diskon sebesar 25%%");
	}else if(totalPembelian>75000){
		totalPembelian-=totalPembelian*15/100;
		printf("Selamat anda mendapatkan diskon sebesar 15%%");
	}else{
		printf("Masukkan total pembelian dengan benar!");
	}
		
	printf("\nTotal pembelian anda adalah Rp. %d",totalPembelian);
	
  return 0;	
}
