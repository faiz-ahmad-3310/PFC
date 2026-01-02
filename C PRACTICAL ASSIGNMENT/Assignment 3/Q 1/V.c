#include <stdio.h>

int main() {
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 13; j++){
            if(j == i || j == 12 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
