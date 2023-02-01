/*
	James Foster
	2-1-18
	section 3
	Lab3
	
	Program declares and initialzes intVar1 through intVar4.
	Declares 4 integers exp1 through exp4.
	program then runs math problems that ive entered into exp1 though exp4 using the intVar we declared aat the beginning. 
	uses fprintf to stdout to print 
		- what intVar1 and intVar2 =
		- what exp1 and exp2 =
		- what intVar3 and intVar4 =
		- what exp3 and exp4 =

	when trying to run progam it returns "floating point exception"
		this happens because exp4 is declared an integer, when dividing 3 by 7 you get a decimal which will be stored as 0
		because int wont hold numbers after the decimal point. 
		this then trys to divide (5 % 2) by 0, and you cannot divide by zero. 



*/






int main(void) {
	#include <stdio.h>
	int intVar1 = 6;
	int intVar2 = 5;
	int intVar3 = 5;
	int intVar4 = 7;
	int exp1 = intVar1+((5*intVar2)/(3*intVar1));
	int exp2 = intVar1+(5*(intVar2/3))*intVar1;
	int exp3 = (intVar4 % 2) / (intVar4 / intVar3);
	int exp4 = 2 + intVar3 * intVar4;

	fprintf(stdout, "intVar1 = %d and intVar2 = %d\n\n", intVar1, intVar2);
	fprintf(stdout, "Expression values are:\n");
	fprintf(stdout, "exp1 = %d\nexp2 = %d\n\n", exp1, exp2);
	fprintf(stdout, "intVar3 = %d and intVar4 = %d\n\n", intVar3, intVar4);
	fprintf(stdout, "Expression values are:\n");
	fprintf(stdout, "exp3 = %d\nexp4 = %d\n", exp3, exp4);
}
