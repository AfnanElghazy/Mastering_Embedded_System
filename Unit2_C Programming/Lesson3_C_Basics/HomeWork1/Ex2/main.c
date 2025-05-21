/*
 * main.c
 *
 *  Created on: May 21, 2025
 *      Author: VICTUS
 */
#include "stdio.h"


int main() {
    int number;

    printf("Enter a integer: ");
    fflush(stdout); // Ensures the prompt displays before input
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    return 0;
}


