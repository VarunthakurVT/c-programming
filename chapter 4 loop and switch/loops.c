// #include <stdio.h>
// int main(){
//     int c=1;
//     while (c<=100){
//         printf("\t %d",c);
//         c++;

//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a=12;
//    if (a>1,a<9)
//     {
//        printf("one digit");
//     }
//     else if (a>99,a<99)
//     {
//       printf("two digit");
//     }
//     else if (a>999,a<9999)

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 100, a, b, c, d;
//     while (n <= 999)
//     {
//         a = n % 10;
//         d = n % 10;
//         b = d % 10;
//         c = d % 10;

//         if (a * a*a + b * b * b + c * c * c == n)
//         {
//             printf("\n %d", n);
//         }
//         n++;
//     }
//     return 0;
// }
// how many armstrong numbers between 100 to 999
// #include <stdio.h>

// int main() {
//     int num, i;

//     printf("Enter a number to print its multiplication table: ");
//     scanf("%d", &num);

//     printf("Multiplication table of %d:\n", num);
//     for (i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }

//     return 0;
// }

// wap to find four digit perfact square who's 1st two and last two digits are also perfect square 1000-9999 use math.h
// header file
// #include <stdio.h>
// #include <math.h>
// #include <stdbool.h>

// bool isPerfectSquare(int num)
// {
//     if (num < 0)
//         return false;
//     int root = (int)sqrt(num);
//     return (root * root == num);
// }

// int main()
// {
//     int num, firstTwo, lastTwo;

//     printf("Four-digit perfect squares whose first two and last two digits are also perfect squares:\n");

//     for (int i = 32; i <= 99; i++)
//     {
//         num = i * i;

//         firstTwo = num / 100;

//         lastTwo = num % 100;

//         if (isPerfectSquare(firstTwo) && isPerfectSquare(lastTwo))
//         {
//             printf("%d (First two: %d, Last two: %d)\n", num, firstTwo, lastTwo);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int i, x, y, z, a, b;
//     for (i = 1000, i <= 9999, i++)
//     {
//         x = sqrt(i);

//             if (x * x == i)
//         {
//             y = i / 100;
//             z = i % 100;
//             a = sqrt(y);
//             b = sqrt(z);
//             if (a * a == y && b * b == z)
//                 printf("\n%d", i);
//         }
//     }

//     return 0;
// }
//to print 1st 20 member fo fibocci series
#include <stdio.h>

int main() {
    int n = 20;
    int a = 0, b = 1, c, i;

    printf("First 20 number Fibonacci series:\n");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }
    printf("\n");
    return 0;
}
