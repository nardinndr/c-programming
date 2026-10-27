
#include <stdio.h>

int main() {

    // Upper part of the heart
    printf(" **   **\n");
    printf("**** ****\n");

    // Lower part of the heart
    //i shows the rows
    for (int i = 0; i < 5; i++) {

        // Print spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < 9 - 2 * i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
