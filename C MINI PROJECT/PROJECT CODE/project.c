#include <stdio.h>
int main() {
    int n, age;
    int child = 0, teenager = 0, youngAdult = 0, adult = 0, senior = 0;
    printf("Enter number of users: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter age of user %d: ", i);
        scanf("%d", &age);

        if (age >= 0 && age <= 12) {
            child++;
        } 
        else if (age >= 13 && age <= 19) {
            teenager++;
        } 
        else if (age >= 20 && age <= 35) {
            youngAdult++;
        } 
        else if (age >= 36 && age <= 59) {
            adult++;
        } 
        else if (age >= 60) {
            senior++;
        } 
        else {
            printf("Invalid age entered!\n");
        }
    }
    printf("\n--- Age Group Survey Analysis ---\n");
    printf("Child (0-12 years): %d\n", child);
    printf("Teenager (13-19 years): %d\n", teenager);
    printf("Young Adult (20-35 years): %d\n", youngAdult);
    printf("Adult (36-59 years): %d\n", adult);
    printf("Senior Citizen (60+ years): %d\n", senior);

    return 0;
}