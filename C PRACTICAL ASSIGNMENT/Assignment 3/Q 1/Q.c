#include <stdio.h>

int main() {
    for(int i=0;i<8;i++){
        for(int j=0;j<7;j++){
            if((i==0 && j>0 && j<6) ||        
               (i==6 && j>0 && j<6) ||        
               (j==0 && i>0 && i<6) ||        
               (j==6 && i>0 && i<6) ||        
               (i>=4 && j==i-1))              
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
