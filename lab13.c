/*
	James Foster
	lab 13
	4-17-18
 
	This program illustrates the use of command-line parameters and sscanf()

	reads in an input.txt file 
	and a number that it will find sum of divisors for
*/

#include <stdio.h>

int sumOfDivisors(int i);

//main function to scan in variables and print out 
int main(int argc, char *argu[]) {

	int num, i, sum=0, n;
	char inp, *type;
	FILE* in_file;
	in_file = fopen(argu[1], "r");
	fscanf(in_file, "%c", &inp);
	sscanf(argu[2], "%d", &num);
	

	for(i=2; i<=num; i++) {
		sum = sumOfDivisors(i);
		if (sum==i){
			type = "Perfect";
		}
		else if(sum<i) {
			type = "Deficient";
		}
		else if(sum>i) {
			type = "Abundant";
		} 
		fprintf(stdout, "%3d is %-10s", i, type);
		for(n=0; n<sum; n++){
			fprintf(stdout, "%c", inp);
		}
		fprintf(stdout, "\n");
	}
return(0);
}
//finds sum of divisors
int sumOfDivisors(int i) {
	
	int g, sum;	
		sum = 0;
		for(g=1; g<i; g++) {
			if (i%g==0) {
				sum = sum+g;
			}
		}			
	
return(sum);
}


