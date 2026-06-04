#include <stdio.h>

int main() {
    int a, b;


    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    printf("\nComparison Results:\n");
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    return 0;
}

