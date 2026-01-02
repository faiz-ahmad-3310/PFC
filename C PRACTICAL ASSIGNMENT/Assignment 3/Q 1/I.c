#include <stdio.h>

int main() {
    for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            if(i==0 || i==6 || j==2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
