#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");
	// isi awal array 
	char huruf[5] = {'a', 'b', 'c','d','e' };
	
	// mengubah isi array 
	huruf[2] = 'z';
	
	//mencetak isi array
	printf("Huruf: %c\n", huruf [2]);
	
	return 0;
}
