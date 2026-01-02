#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 7; j++) {
            if (j == 1 || j == 7 || (i >= 3 && (j == i || j == 8 - i))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
