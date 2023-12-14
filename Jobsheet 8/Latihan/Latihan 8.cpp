#include <stdio.h>

void kali_dua(int *num){
	*num = *num * 2;
}

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int angka = 9;

	//memanggil fungsi	
	kali_dua(&angka);
	
	//mencetak isi variabel
	//setelah fungsi dipanggil
	printf("isi variabel angka = %d\n", angka);
	
	return 0;
}
