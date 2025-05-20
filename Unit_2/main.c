/*
 * main.c
 *
 *  Created on: May 20, 2025
 *      Author: VICTUS
 */
float  a = 0;
float  b = 0;
float temp = 0 ;

#include "stdio.h"
int main (){

	/*printf( "Enter a value of a :  ");
	fflush(stdout);
	scanf("%f" ,&b);
	printf( "Enter a value of b :  ");
	fflush(stdout);
	scanf("%f" ,&a);
	printf("after swapping a = %f \n " ,a);
	printf("after swapping b = %f\n " ,b);*/
	printf( "Enter a value of a :  ");
	fflush(stdout);
	scanf("%f" ,&a);
	printf( "Enter a value of a :  ");
    fflush(stdout);
	scanf("%f" ,&b);
	temp = a ;
	a=b;
	b=temp;
	printf("after swapping a = %f \n " ,a);
	printf("after swapping b = %f\n " ,b);


}
