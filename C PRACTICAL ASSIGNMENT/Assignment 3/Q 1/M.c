#include <stdio.h>

int main() {
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(j==0 || j==6 || (i==j && j>0 && j<4) || (i+j==6 && j>2 && j<6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
