/*
 * main.c
 *
 *  Created on: May 23, 2025
 *      Author: VICTUS
 */
#include "stdio.h"
int main (){
	char operator =0 ;
	int a = 0 ,b = 0 ,result =0;
	printf("Enter operator either + or - or * ");
	fflush(stdout);
	scanf("%c",&operator);
	// while (getchar() != '\n');

	printf("Enter two operands  ");
	fflush(stdout);
	scanf("%i  %i",&a ,&b);
	switch (operator){
	case '*' :

		result = a*b ;
		printf("%i * %i = %i \n",a ,b,result);
		fflush(stdout);
		break;
	case '+' :

		result = a+b ;
		printf("%i + %i = %i \n",a ,b,result);
		fflush(stdout);


		break;
	case '-' :

		result = a-b ;
		printf("%i * %i = %i \n",a ,b,result);
		fflush(stdout);


		break;

	default:

		printf ("enter suitable operator");
		fflush(stdout);

		break;
	}
}

