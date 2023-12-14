#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	char np[20];
	char nb[20];
	int total,hb,jb;
    
	
	printf("Masukkan Nama Pembeli       : ");
	fgets(np,sizeof(np),stdin);
	printf("Masukkan Nama barang        : ");
	fgets(nb,sizeof(nb),stdin);
	printf("Masukkan Harga barang satuan: Rp.");
	scanf("%d",&hb);
	printf("Masukkan Jumlah barang      : ");
	scanf("%d",&jb);
	
	
	
	total=hb*jb;
	
	printf("\nTotal harga barang yang dibeli: Rp.%d",total);
	
	return 0;
}
