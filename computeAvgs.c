#include "defs.h"

//function will find average of student grades
void studentAvgs(int grades[STUDENT][LAB]) {

	int i, j, type=0;
	double stuAvg[6], avg, sum;
	int size=STUDENT;

	//finds average grade for each student
	for(i=0; i<STUDENT; i++) {
		sum=0;
		for(j=0; j<LAB; j++) {
			sum=sum+grades[i][j];			
		}	
		avg=sum/7;
		stuAvg[i]=avg;
	}
	printAvgs(stuAvg, size, type);

	fprintf(stdout, "\n");
}
//find avg grades for each lab
void labAvgs(int grades[STUDENT][LAB]) {
	
	int i, j, type=1, size=LAB;
	double labAvg[LAB], avg, sum;
	
	//finds average for each lab
	for(j=0; j<LAB; j++) {
		sum=0;
		for(i=0; i<STUDENT; i++) {
			sum=sum+grades[i][j];			
		}	
		avg=sum/6;
		labAvg[j]=avg;
	}
	printAvgs(labAvg, size, type);
}
