#include <stdio.h>

int main() {
    for(int i=0;i<7;i++){
        for(int j=0;j<6;j++){
            if(j==0 || j==5-i || (i>3 && j==i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
