/*
 * main.c
 *
 *  Created on: May 23, 2025
 *      Author: VICTUS
 */
#include "stdio.h"
int main (){
	int number =0 ,factorial =1 ;

	printf("Enter a number ");
	fflush(stdout);
	scanf("%i",&number);
	if(number == 0){
		printf("factorial of zero =1 ");
	}else if (number <= 0){
		printf("Error!!!! factorial of negative number doesn't exit");
	}else
	{
		for (int i =1 ;i<=number;i++){
			factorial *= i ;
		}
		printf("factorial = %i",factorial);
	}
}

