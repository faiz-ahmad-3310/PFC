#include <stdio.h>

int main() {
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(i==0 && j>1 && j<6 ||
               i==6 && j>1 && j<6 ||
               j==1 && i>0 && i<6 ||
               j==6 && i>=3 && i<6 ||
               i==3 && j>=3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
