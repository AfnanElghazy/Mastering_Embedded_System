/*
 * main.c
 *
 *  Created on: May 23, 2025
 *      Author: VICTUS
 */
#include "stdio.h"
#include "ctype.h"
int main (){
	char letter =0;
	printf("enter a character ");
	fflush(stdout);
	scanf("%c",&letter);
	 if (isalpha(letter)){
		 printf("%c is alphabet",letter);
		  }else{
			  printf("%c is not an alphabet",letter);
		  }

	}





