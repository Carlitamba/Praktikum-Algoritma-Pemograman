#include <stdio.h>

void say_hello(char name[]){
	printf("hello %s!\n", name);
}

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
	say_hello("Dian");
	say_hello("petani");
	say_hello("kode");

	return 0;
}

