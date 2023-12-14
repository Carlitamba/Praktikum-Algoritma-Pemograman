#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	int pilihan;
	int uang;
	char noRek[]="0123";
	char namaAkun[]="Hatori";
	int saldoAtm=175000;
	do{
		printf("\n\n=========Menu ATM=========\n");
		printf("1) Cek Saldo\n");
		printf("2) Setoran\n");
		printf("3) Penarikan Tunai\n");
		printf("4) Exit\n");
		printf("Pilih Menu : ");
		scanf("%d",&pilihan);
		
		switch(pilihan){
			case 1:
				printf("No Rek     : %s\n",noRek);
				printf("Nama Akun  : %s\n",namaAkun);
				printf("Saldo ATM  : Rp.%d\n",saldoAtm);
				break;
			
			case 2:
				printf("Masukkan jumlah uang yang akan disetor : Rp.");
				scanf("%d",&uang);
				saldoAtm+=uang;
				break;
			
			case 3:
				printf("Masukkan jumlah uang yang akan ditarik : Rp.");
				scanf("%d",&uang);
				if(saldoAtm-uang<50000){
				printf("Saldo anda telah mencapai batas minimal\n");
				printf("Tidak bisa menarik uang");
				}else{
					saldoAtm-=uang;
				}
				break;
			
			case 4:
				printf("Terima Kasih!");
				break;
				
			default:
				printf("Pilihan tidak tersedia!\n");
		}
	}while(pilihan != 4);
	
	return 0;
}
