
/*
	James Foster
	2-13-18
	Lab section 003
	Lab 5

	asks for input of a character and a interger for height,
	prints isosceles triangle with inputs using loops to code.
	prints area of triangle

*/

int main(void) {

	#include<stdio.h>


	//declaes/initalizes new characters, integers, floats
	char tri;
	int height, g=1, t=1;
	float area;

	//Asks for a character
	fprintf(stdout, "%s", "Enter a character:  ");
	fscanf(stdin, "%c", &tri);
	fprintf(stdout, "\n\n");

	//States that we will draw a triangle, asks for number to make height of triangle
	fprintf(stdout, "Let's draw an isosceles triangle with your character %c. \n", tri);
	fprintf(stdout, "%s", "Enter a value for the height of the triangle: ");
	fscanf(stdin, "%d", &height);
	fprintf(stdout, " (base will be the same as height.)\n");
	
	//Formula finds area of triangle
	area = (height*height)/2.0;

	//Loop statement: runs loop statements in side curly brackets, increases g by 1, repeats till g is less than or equal to height
	while (g<=height) {
		//declares integers i and x
		int i=1, x=height;
		//Loop statement: it will print an empty space, and lower x by one, repeat till x is less than or = t 
		while(x>=t) {		
			fprintf(stdout, "%s", " ");
			x=x-1;
			}
		t=t+1;
		//Loop statement: prints caharcter tri, increases i by 1, continues to print tri till i is less than or equal to g
		while(i<=g) {
			fprintf(stdout, "%c ", tri);	
			i=i+1;
			}
		fprintf(stdout, "\n");
		g= g+1;
	}
	
	fprintf(stdout, "\n");

	//shows area
	fprintf(stdout, "The area of your triangle is %f \n", area);

	return(0);

}
