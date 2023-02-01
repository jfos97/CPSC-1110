#include "defs.h"

//sorts all grades from least to greatest
void sortGrades(int grades[STUDENT][LAB]) {

	const int k=STUDENT*LAB;
	int i, j, n, sortedGrades[k], min, temp;
	
	//saves all numbers entered into 1D array called sortedGrades
	n=0;
	for(i=0; i<STUDENT; i++){
		for(j=0; j<LAB; j++){
			sortedGrades[n]=grades[i][j];
			n=n+1;
		}
	}

	//sorts all grades from least to greatest
	for(i=0; i<k; ++i){
		min=i;
		for(j=i+1; j<k; ++j){
			if(sortedGrades[j]<sortedGrades[min]){
				min=j;
			}
		}
	temp = sortedGrades[i];
	sortedGrades[i] = sortedGrades[min];
	sortedGrades[min] = temp;
	}

	fprintf(stdout, "\n");
	printSorted(sortedGrades, k);
}

