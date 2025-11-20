#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a, b, c, r;
    do
    {
        printf("\n press 1 for addition");
        printf("\n press 2 for subtraction");
        printf("\n press 3 for multiplication");
        printf("\n press 0 to exit");
        printf("\n enter your choice ");
        scanf("%d", &c);
        printf("enter two numbers");
        scanf("%d %d", &a, &b);
        switch (c)
        {
        case 1:
            r = a + b;
            break;
        case 2:
            r = a - b;

            break;
        case 3:
            r = a * b;
            break;
        case 0:
            exit(1);

        default:
            printf("invalid choice");
        }
        printf("%d", r);

    } while (1);
    return 0;
}
