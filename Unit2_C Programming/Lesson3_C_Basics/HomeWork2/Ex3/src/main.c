/*
 * main.c
 *
 *  Created on: May 22, 2025
 *      Author: VICTUS
 */
#include "stdio.h"
int main (){
	float  num1=0 , num2=0 ,num3 =0;
	printf("Enter 3 numbers :");
	fflush(stdout);
	scanf("%f %f %f",&num1 ,&num2 ,&num3);
	if (num1 == num2 ){
		if (num1 > num3){
			printf("num1 = num2 and greater than num3 ");
		}else{
			printf("num1 = num2 and num3 is larger than both ");
		}
	}
	else if (num2 == num3){
		if (num1 > num3){
			printf("num2 = num3 and num1 is greater than both ");
		}else{
			printf("num2 = num3 and   larger than num1 ");
		}
	}
	else if (num3 == num1){
		if (num1 > num2){
			printf("num1 = num3 and  greater than num2 ");
		}else{
			printf("num1 = num3 and   num2 is the largest ");
		}
	}
	else if (num1 > num2){
		if (num1 > num3){
			printf("num1 is the largest");
		}
		else {
			printf("num3 is the largest");
		}
	}
	else if (num2 > num3){
		printf("num2 is the largest");
	}
	else {
		printf("num3 is the largest");


	}
}


