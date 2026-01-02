#include <stdio.h>

int main() {
    for(int i=0;i<7;i++){
        for(int j=0;j<6;j++){
            if((j==0 && i<6) ||
               (j==5 && i<6) ||
               (i==6 && j>0 && j<5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
