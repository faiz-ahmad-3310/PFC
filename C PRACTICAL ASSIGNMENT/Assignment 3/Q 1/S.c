#include <stdio.h>

int main() {
    for(int i=0;i<7;i++){
        for(int j=0;j<6;j++){
            if((i==0 && j>0) ||
               (i==3) ||
               (i==6 && j<5) ||
               (j==0 && i>0 && i<3) ||
               (j==5 && i>3 && i<6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
