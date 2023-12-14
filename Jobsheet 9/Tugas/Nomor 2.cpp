#include <stdio.h>
#include <string.h>

int main() {
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
    char kalimat[20];
    printf("Kalimat Masukkan \t: ");
    scanf("%s",&kalimat);

    int panjang = strlen(kalimat);

    printf("Kebalikannya \t\t: ");
    for (int i = panjang - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }

    return 0;
}

