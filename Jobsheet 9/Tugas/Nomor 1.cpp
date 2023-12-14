#include <stdio.h>

int main() {
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");		
    char borland[] = "DNALROB";
    char *ptr1 = borland;

    while (*ptr1 != '\0') {
        char *ptr2 = ptr1;
        while (ptr2 >= borland) {
            printf("%c", *ptr2);
            ptr2--;
        }
        printf("\n");
        ptr1++;
    }

    return 0;
}

