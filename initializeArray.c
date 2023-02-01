#include "defs.h"

//function will take input for grades
void  getGrades(int grades[STUDENT][LAB]) {

	int i, j;

	//imputs grades
	for(i=0; i<STUDENT; i++){
		for(j=0; j<LAB; j++){
			fscanf(stdin, "%i", &grades[i][j]);
		}
	}
}
