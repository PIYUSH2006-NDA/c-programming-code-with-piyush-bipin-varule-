/*Q5. Input a Character from the user and printif if it is vowel or not.*/
#include<stdio.h>

int main() {
    char alpha;
    printf("\nEnter the alphabet: ");
    scanf("%c", &alpha);

    switch(alpha) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
printf("this letter is vowel");
        break;
        default:
        printf("this is a consonent means not a vowel");
    }

    return 0;
}
