#include <stdio.h>

int main() {
    int age;

    while (1) { // infinite loop until break is used
        printf("Enter the age: ");
        scanf("%d", &age);

        if (age > 18) {
            printf("You are eligible for license\n");
            break;  // Exit the loop when condition is met
        } else {
            printf("Not eligible. Try again.\n");
        }
    }

    return 0;
}
