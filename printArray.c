#include "defs.h"

//function will print out inputed grades
void printGrades(int grades[STUDENT][LAB]) {

	int i, j;

	//prints grades inputed for each student
	for(i=0; i<STUDENT; i++) {
		fprintf(stdout, "Student %d: ", i+1);
		for(j=0; j<LAB; j++) {
			fprintf(stdout, "%4i", grades[i][j]);
		}	
		fprintf(stdout, "\n");
	}
	fprintf(stdout, "\n");
}
//function will print avg found for either student or lab
void printAvgs(double Avg[], int size, int type) {

	int i;

	if(type==0) {
		for (i=0; i<size; i++) {
			fprintf(stdout, "Student %d average: %.2f", i+1, Avg[i]);
			fprintf(stdout, "\n");
		}
	}
	else {
		for (i=0; i<size; i++) {
			fprintf(stdout, "Lab %d average: %.2f", i+1, Avg[i]);
			fprintf(stdout, "\n");
		}
	}
}
//prints sorted grades.
void printSorted(int sortedGrades[], int k) {

	int n;

	for(n=0;n<k/2;n++){
		fprintf(stdout, "%-4i", sortedGrades[n]);
	}
	fprintf(stdout, "\n");
	for(n=k/2;n<k;n++){
		fprintf(stdout, "%-4i", sortedGrades[n]);
	}
	fprintf(stdout, "\n\n");
}
