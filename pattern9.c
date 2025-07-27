#include <stdio.h>

int main() {

    int x;

    printf("Input : ");

    scanf("%d", &x);

    printf("Output : \n");

    for (int i = 0; i < x; i++) {

        for(int j = 0; j < x-i-1; j++) {

          printf(" ");  
        }

        for (int k = 0; k < i*2+1; k++) {

            printf("*");
        }

        printf("\n");
    }

     for (int i = 0; i < x-1; i++) {

        for (int j = 0; j <= i; j++) {

            printf(" ");
        }

        for (int k = 0; k < 2*(x - i - 1) - 1; k++) {

            printf("*");
        } 

        printf("\n");
    }
    
    return 0;
}
