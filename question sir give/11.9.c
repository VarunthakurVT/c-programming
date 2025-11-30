#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Required for toupper()!

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline using string.h
    str[strcspn(str, "\n")] = '\0';
    
    // Convert using toupper() from ctype.h
    for(int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    
    printf("Uppercase string: %s\n", str);
    return 0;
}
