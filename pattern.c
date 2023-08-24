// square pattern
// #include <stdio.h>

// int main() {
//    int i, j, rows;

//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);

//    for (i = 1; i <= rows; i++) {
//       for (j = 1; j <= rows; j++) {
//          printf("* ");
//       }
//       printf("\n");
//    }

//    return 0;
// }

// pyramid pattern

// #include <stdio.h>

// int main() {
//    int i, j, rows, spaces;

//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);

//    spaces = rows;

//    for (i = 1; i <= rows; i++) {
//       for (j = 1; j < spaces; j++) {
//          printf(" ");
//       }
//       spaces--;

//       for (j = 1; j <= 2 * i - 1; j++) {
//          printf("*");
//       }
//       printf("\n");
//    }

//    return 0;
// }

// right triangle

// #include <stdio.h>
// int main() {
//     int i, j, rows;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Diamons pattern

// #include <stdio.h>
// int main()
// {
//    int i, j, space, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    space = rows - 1;
//    for (i = 1; i <= rows; i++)
//    {
//       for (j = 1; j <= space; j++)
//       {
//          printf(" ");
//       }
//       space--;
//       for (j = 1; j <= 2 * i - 1; j++)
//       {
//          printf("*");
//       }
//       printf("\n");
//    }
//    space = 1;
//    for (i = 1; i <= rows - 1; i++)
//    {
//       for (j = 1; j <= space; j++)
//       {
//          printf(" ");
//       }
//       space++;
//       for (j = 1; j <= 2 * (rows - i) - 1; j++)
//       {
//          printf("*");
//       }
//       printf("\n");
//    }
//    return 0;
// }

// Number pattern
// #include <stdio.h>
// int main() {
//     int rows = 5;
//     int num = 1;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// inverted right half pyramid
// #include <stdio.h>
// int main() {
//    int rows, i, j;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for(i = rows; i >= 1; i--) {
//       for(j = 1; j <= i; j++) {
//          printf("* ");
//       }
//       printf("\n");
//    }
//    return 0;
// }

// inverted full pyramid
// #include <stdio.h>
// int main() {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (int i = rows; i >= 1; i--) {
//         for (int j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2 * i - 1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// greater than(<) pattern

// #include <stdio.h>
// int main() {
//     int n, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= n; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (i = n - 1; i >= 1; i--) {
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= n; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// hollow square 

// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= cols; j++) {
//             if (i == 1 || i == rows || j == 1 || j == cols) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// hollow full pyramid pattern
// #include <stdio.h>
// int main() {
//     int rows, i, j, space;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++) {
//         for (space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) {
//             if (j == 1 || j == i || i == rows) {
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }
//         }
//         for (j = i - 1; j >= 1; j--) {
//             if (j == 1 || j == i - 1 || i == rows) {
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// pascal pattern

// #include <stdio.h>
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int binomialCoeff(int n, int r)
// {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }
// void printPascal(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%d ", binomialCoeff(i, j));
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int rows;
//     printf("Enter the number of rows for Pascal's Triangle: ");
//     scanf("%d", &rows);
//     printf("Pascal's Triangle pattern:\n");
//     printPascal(rows);
//     return 0;
// }










