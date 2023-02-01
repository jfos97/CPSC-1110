/* 


	James Foster
	2-6-2018
	CPSC 1111-003
	Lab 4

	Asks the user for inputs and prints output 
	based on changing inputs using ASCII table


*/


int main(void) {

	#include <stdio.h>
	#include <math.h>

	char ch1, ch2, ch3, ch4, asc;
	int num, num2;


	fprintf(stdout, "%s", "\nEnter a capital letter:  ");
	scanf(" %c", &ch1);
	ch2= ch1+32;
	fprintf(stdout, "   The lowercase of %c is: %c\n\n", ch1, ch2);

	fprintf(stdout, "%s", "Enter a lowercase letter:  ");
	scanf(" %c", &ch3);
	ch4= ch3-32;
	fprintf(stdout, "   The uppercase of %c is: %c\n\n", ch3, ch4);

	fprintf(stdout, "Enter a number:  ");
	scanf(" %d", &num);
	num2 = pow(num, 3);
	fprintf(stdout, "   %d cubed is %d\n\n", num, num2);

	asc= num+'0';

	fprintf(stdout, "   The ASCII values for %d are: \n", num);
	fprintf(stdout, "   %-16s%-16s%-16s\n", "DECIMAL", "OCTAL", "HEX");
	fprintf(stdout, "   %-16d%#-16o%#-16x\n\n", asc, asc, asc);

}	
