/*
 * main.c
 *
 *  Created on: May 23, 2025
 *      Author: VICTUS
 */

#include"stdio.h"
int main(){
	int index=0 ,sum =0;
	printf("Enter an index");
	fflush(stdout);
	scanf("%i",&index);
	if(index <0){
		printf("enter positive index");
	  }
	else if (index >= 0){
		for (int i=1 ; i<=index ;i++){
			sum=sum+i;
		}
		printf (" sum = %i",sum);

	}



}
