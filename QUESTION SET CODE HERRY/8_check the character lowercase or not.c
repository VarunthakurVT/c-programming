#include <stdio.h>

int main() {
    char ch;
    printf("enter the character you want to check: ");
    scanf("%c", &ch);     // use %c for char

    if (ch >= 'a' && ch <= 'z') {
        printf("this is small case");
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        printf("this is uppercase");
    } 
    else {
        printf("invalid");
    }

    return 0;
}
