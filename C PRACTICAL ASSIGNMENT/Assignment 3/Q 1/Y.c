#include <stdio.h>

int main() {
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if((j == i && i < 3) || (j == 6 - i && i < 3) || (j == 3 && i >= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
