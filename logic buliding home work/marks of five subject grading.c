#include <stdio.h>

int main() {
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);

    if (marks > 60) {
        printf("1st division\n");
    }
    else if (marks >= 50 && marks <= 60) {
        printf("2nd division\n");
    }
    else if (marks > 40 && marks < 50) {
        printf("3rd division\n");
    }
    else if (marks < 40) {
        printf("fail\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}
