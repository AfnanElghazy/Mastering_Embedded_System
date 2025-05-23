/*
 * main.c
 *
 *  Created on: May 22, 2025
 *      Author: VICTUS
 */
#include "stdio.h"
int main (){
	float number =0;
	printf("Enter a number");
	fflush(stdout);
	scanf("%f" ,&number);
	if(number == 0.0){
		printf("you entered zero ");
		}else if (number > 0){
			printf("%f is positive", number);
			}else{
				printf("%f is negative", number);

			}



}


