
#include <stdio.h>

int main(void) {
    int age;
    double height;
    char name[50];

    // Input
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your height: ");
    scanf("%lf", &height);

    printf("Please enter your name: ");
    scanf("%49s", name);

    // Output
    printf("\n----- Student Information -----\n");
    printf("%-10s : %d\n", "Age", age);
    printf("%-10s : %.2f m\n", "Height", height);
    printf("%-10s : %s\n", "Name", name);

    return 0;
}
