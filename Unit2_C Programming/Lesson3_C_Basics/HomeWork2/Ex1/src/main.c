/*
 * main.c
 *
 *  Created on: May 22, 2025
 *      Author: VICTUS
 */
#include "stdio.h"
int main (){
	int num = 0;
	printf("Enter an integer ");
	fflush(stdout);
	scanf("%i",&num);
	if(num % 2 == 0){
		printf("%i is even",num );
	}
		else
			printf("%i is odd",num );






}

