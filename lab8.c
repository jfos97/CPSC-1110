/*
	James Foster
	CPSC 1111-003
	lab8
	
	program find two arrays, one from user input and one from random numbers
	then find the second highest number in each array
	and also the product of the two arrays



*/
	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>

int main(void) {

	//declares integers
	int array1[20], array2[20], i, n, x, sum=0, max, num, max2, num2;
	
	n=0;
	x=0;
	//loop to have user enter 20 numbers
	for(i=0;i<=19;i++) {

		fprintf(stdout, "Enter an interger ");
		fscanf(stdin, "%d", &array1[n]);
		n=n+1;
	}
	fprintf(stdout, "\narray1:\n");
	//loop to print out all numbers in array1
	for(x=0; x<=19;x++){
		fprintf(stdout, "%d\n", array1[x]);

	}
	n=0;
	max=array1[n];
	//loop to find second highest in array1
	for(i=0;i<=19;i++) {
		if(array1[n]>max)
		{
			num=max;
			max=array1[n];
		}
		else if(array1[n] < max && array1[n] > num) {
			num=array1[n];
		}
		n=n+1;
	}

	n=0;
	//loop to find 20 random numbers for array 2
	for(i=0;i<=19;i++) {
	
		array2[n]=(rand()%50)+1;
		n=n+1;

	}
	fprintf(stdout, "\narray2:\n");
	//loop to print all numbers in array2
	for(x=0; x<=19;x++){
		fprintf(stdout, "%d\n", array2[x]);

	}

	n=0;
	max2=array2[n];
	//loop to find second highest in array2
	for(i=0;i<=19;i++) {
		if(array2[n]>max2)
		{
			num2=max2;
			max2=array2[n];
		}
		else if(array2[n] < max2 && array2[n] > num2){
			num2=array2[n];
		}
		n=n+1;
	}

	n=0;
	//loop to find product of array 1 and 2 
	for(i=0;i<=19;i++){	
		sum=sum+array1[n]*array2[n];
		n=n+1;	
	}

	//prints second hgiehst for array 1 and 2 and the product of all numbers
	fprintf(stdout, "second highest in array1: %d\n", num);
	fprintf(stdout, "second highest in array2: %d\n\n", num2);
	fprintf(stdout, "Inner product is: %d\n", sum);


	return(0);


}
