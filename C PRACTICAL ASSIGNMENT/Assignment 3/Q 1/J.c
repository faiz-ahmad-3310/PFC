#include <stdio.h>

int main() {
    for(int i=0;i<7;i++){
        for(int j=0;j<6;j++){
            if(i==0 || (j==3 && i<6) || (i==6 && j<3) || (j==0 && i==5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
