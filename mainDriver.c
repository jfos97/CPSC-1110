#include "defs.h"


int main (void) {

	int grades[STUDENT][LAB];
	
	getGrades(grades);
	printGrades(grades);
	studentAvgs(grades);
	labAvgs(grades);
	sortGrades(grades);

return(0);

}
