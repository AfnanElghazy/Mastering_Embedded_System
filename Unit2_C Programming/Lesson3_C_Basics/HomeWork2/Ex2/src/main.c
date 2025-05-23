/*
 * main.c
 *
 *  Created on: May 22, 2025
 *      Author: VICTUS
 */


#include "stdio.h"
int main (){
	char alphabet = 0;
	printf("Enter an alphabet :");
	fflush(stdout);
	scanf("%c",&alphabet);
	switch (alphabet){
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'U':
	case 'u':
	case 'O':
	case 'o': // if i want it to do same action for different cases i write sequentally
	{
		printf("%c is a vowel",alphabet);
	}
	break;   // after each case we put break; or it will execute true case and  default
	default :
	{
		printf("%c is a constant",alphabet);
	}


	break; // default case should be followed by break;
	}



}
