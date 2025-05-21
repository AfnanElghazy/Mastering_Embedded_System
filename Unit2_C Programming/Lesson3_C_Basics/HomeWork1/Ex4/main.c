/*
 * main.c
 *
 *  Created on: May 21, 2025
 *      Author: VICTUS
 */


#include <stdio.h>

int main() {
    float num1, num2, product;

    printf("Enter two numbers: ");
    fflush(stdout);
    scanf("%f %f", &num1, &num2);


    product = num1 * num2;

    printf("Product: %f\n", product);

    return 0;
}
