/*
 * main.c
 *
 *  Created on: May 21, 2025
 *      Author: VICTUS
 */
#include <stdio.h>

int main() {
    float a, b, temp;

    printf("Enter value of a: ");
    fflush(stdout);
    scanf("%f", &a);

    printf("Enter value of b: ");
    fflush(stdout);
    scanf("%f", &b);

    // Swap
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping, value of a = %g\n", a);
    printf("After swapping, value of b = %g\n", b);

    return 0;
}


