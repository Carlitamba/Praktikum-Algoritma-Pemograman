#include <stdio.h>

void add_score(int *score){
	*score = *score + 5;
	printf("score diubah ke %d\n",*score);
}

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	int score = 0;
	
	printf("score sebelum diubah: %d\n",score);
	add_score(&score);
	printf("score setelah diubah: %d\n",score);
	
	return 0;
}
