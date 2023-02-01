/* 
	James Foster
	2-20-18
	Lab 6
	1011-003
	
	asks for 3 digit number. takes the square root of the number and the will equal radius.
	randomly generates 10 points  (x,y)  between cetrain bounds.
	tells you the points and if there are inside, outside, or on the circumference or the circle
	that has a radius of what what calculated 





*/

	#include<stdio.h>
	#include<math.h>
	#include<stdlib.h>
	#include<time.h>
 
int main(void) {

	//declare integers
	int radi, num, x, y, i;
	
	//asks for three digit number
	fprintf(stdout, "Enter a three digit number: ");
	fscanf(stdin, "%d", &num);

	//find sqaure root of number
	radi = sqrt(num);

	//fprintf(stdout, "%d\n", radi);
	//srand((int) time(0));
	
	//sets i to 0
	i=0;
	
	//Loop statement repeats as long as i is less than 10
	while(i<10)
	{

		//finds two random numbers with created bounds and sets equal to x and y

		x= (rand() %((radi + 5)*2)-(radi + 5));
		y= (rand() %((radi + 5)*2)-(radi + 5)); 

		//if x squared plus y squared is less than radius squares then point used is inside circle
		if (pow(x,2)+pow(y,2)<pow(radi,2)) {
			fprintf(stdout, "(%3d,%3d) is inside the circle with radius %d\n", x, y, radi);
		}
		//if x squared plus y squared is equal to radius squared then point used is on the circumfernce of the  circle
		else if(pow(x,2)+pow(y,2) == pow(radi,2)) {
			fprintf(stdout, "(%3d,%3d) is on the circumference of the circle at radius %d\n", x, y, radi);
		}	
		//if the other two possiblitys arent true then the point used is outside of the cicle
		else {	
			fprintf(stdout, "(%3d,%3d) is outside the circle with radius %d\n", x, y, radi);
		}

		//fprintf(stdout, "(%d,%3d)", x,y);

		//adds one to i
		i=i+1;
	}
	
	



	return(0);

}
