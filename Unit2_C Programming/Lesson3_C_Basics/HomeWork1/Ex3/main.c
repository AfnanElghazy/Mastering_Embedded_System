/*
 * main.c
 *
 *  Created on: May 21, 2025
 *      Author: VICTUS
 */

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter two integers: ");
    fflush(stdout); // Ensures prompt appears before input
    scanf("%d", &num1);
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum: %d\n", sum);

    return 0;
}

