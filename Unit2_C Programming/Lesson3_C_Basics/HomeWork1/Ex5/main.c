/*
 * main.c
 *
 *  Created on: May 21, 2025
 *      Author: VICTUS
 */
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c", &ch);

    printf("ASCII value of %c = %d\n", ch, (int)ch);

    return 0;
}



