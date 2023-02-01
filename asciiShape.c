/*
	James Foster
	Jaf2
	1110-002
	2-27-2018
	Assignment 1
	  ASCIISHAPE
	
	5 hours
	7 hours

	program will draw shapes based on user input



*/

	#include<stdlib.h>
	#include<stdio.h>
	#include<math.h>

int main(void) {

	//declares integers and characters
	int len, wdt, i, g, h, x, u, j, c, d, blank, height;
	char l='*', f=' ', y=' ', shape;
	
	//initial output states what program will do
	fprintf(stdout, "\n= = = = = = = = = = = = = = = = = = =\n");
	fprintf(stdout, "=   This program will draw a shape  =\n");
	fprintf(stdout, "=    using values that you input.   =\n");
	fprintf(stdout, "= = = = = = = = = = = = = = = = = = =\n");

//loop statement that will run program as long as input is not q or Q
while(!(shape=='q'||shape=='Q'))
{
	//states variables used to draw shapes
	fprintf(stdout, "\n= = = = = = = = = = = = \n");
	fprintf(stdout, "= '%c' used for 'line' = \n", l);
	fprintf(stdout, "= '%c' used for 'fill' = \n", f);
	fprintf(stdout, "= = = = = = = = = = = = \n\n");

	//asks for one of the following inputs
	fprintf(stdout, "Enter the number corresponding to the shape you would like to draw\n");
	fprintf(stdout, "1. Rectangle\n");
	fprintf(stdout, "2. Triangle\n");
	fprintf(stdout, "3. Hexagon\n");
	fprintf(stdout, "or enter one of the following letter for the following options:\n");
	fprintf(stdout, "L. Change 'line' character\n");
	fprintf(stdout, "F. Change 'fill' character\n");
	fprintf(stdout, "Q. Quit program\n\n");

	//retrieves input
	fscanf(stdin, " %c", &shape);

	//runs whats in statement if shape input is equal to 1
	if(shape=='1')
	{
		//asks for input of length and width
		fprintf(stdout, "\nEnter an integer (1 or greater) for the length: ");
		fscanf(stdin, "%d", &len);
		fprintf(stdout, "Enter an integer (1 or greater) for the width: ");
		fscanf(stdin, "%d", &wdt);
		fprintf(stdout, "\n");
		
		//loop confrims input is greater than 1, if not asks for new input
		while(len<1||wdt<1)
		{
			fprintf(stdout, "\nEnter an integer (1 or greater) for the length: ");
			fscanf(stdin, "%d", &len);
			fprintf(stdout, "Enter an integer (1 or greater) for the width: ");
			fscanf(stdin, "%d", &wdt);
			fprintf(stdout, "\n");
		}

		//initalizes wdt and i
		wdt=wdt-2;
		i=1;

		//loop tp print first line of rectangle
		while(i<=len) {
			fprintf(stdout, "%c", l);
			i=i+1;
		}
		g=1;
	
		//loop to create middle lines of rectangle
		while(g<=wdt) {
			fprintf(stdout, "\n%c", l);
			h=1;
			blank=len-2;
			while(h<=blank) {
				fprintf(stdout, "%c", f);
				h=h+1;
			}
			fprintf(stdout, "%c", l);
			g=g+1;
		}
		fprintf(stdout, "\n");
		i=1;

		//loop to print last line of rectangle
		while(i<=len) 
		{
			fprintf(stdout, "%c", l);
			i=i+1;
		}
	}
	
	// another if that will run this program if shape input  is = 2
	else if(shape=='2') 
	{
		//asks for height of triangle
		fprintf(stdout, "\nEneter an integer (1 or greater) for the height: ");
		fscanf(stdin, "%d", &height);
		
		//loop to confirm input is greater than 0 if not asks for input again
		while(height<=0)
		{
			fprintf(stdout, "\nEneter an integer (1 or greater) for the height: ");
			fscanf(stdin, "%d", &height);
		}
		
		if(height>0) 
		{
			i=1;
			
			//loop for top of triangle
			while(i<height)
			{
				fprintf(stdout, "%c", y);
				i=i+1;
			}
			fprintf(stdout, "%c\n", l);	
			
			//declaares variable i, u, h, g, x and j
			i=2;
			u=0;
			h=height-2;
			g=1;
			x=0;
			j=(height*2)-1;

			//loop to draw middle lines of triangle
			while(x<h)
			{
		
				while(i<height)
				{
					fprintf(stdout, "%c", y);
					i=i+1;
				}
				fprintf(stdout, "%c", l);
				c=0;
				while(c<g)
				{
					fprintf(stdout, "%c", f);
					c=c+1;
				}
				fprintf(stdout, "%c\n", l);
				g=g+2;
				x=x+1;
				i=2;
				d=0;
				while(d<x)
				{
					i=i+1;
					d=d+1;
				}
			}
			
			//loop to draw bottom line of triangle
			while(u<j)
			{
				fprintf(stdout, "%c", l);
				u=u+1;
			}
			fprintf(stdout, "\n\n");
		}
	}		

	//if userinput of shape is 3 then runs this program
	else if(shape=='3') 
	{

		//asks for integer for length of each side of hexagon
		fprintf(stdout, "Enter an integer (1 or greater) for the length of each side: ");
		fscanf(stdin, "%d", &len);

		//loop to confirm input is greater than 0
		while(len<=0)
		{
			fprintf(stdout, "Enter an integer (1 or greater) for the length of each side: ");
			fscanf(stdin, "%d", &len);
		}
			
		//declares variables
		x=1;
		i=0;
		j=len;
		c=len-2;
		d=1;

		//2 loops for top of hexagon, one for blank spaces, one for 'line'
		while(x<len) 
		{		
			fprintf(stdout, "%c", y);
			x=x+1;
		}
		while(i<len)
		{
			fprintf(stdout, "%c", l);
			i=i+1;
		}
		fprintf(stdout, "\n");

		//loop to draw top half of hexagon
		while(d<len)
		{
			g=0;
			while(g<c)
			{
				fprintf(stdout, "%c", y);
				g=g+1;
			}
			c=c-1;
			fprintf(stdout, "%c", l);
			h=0;
			while(h<j)
			{
				fprintf(stdout, "%c", f);
				h=h+1;
			}
			fprintf(stdout, "%c\n", l);
			d=d+1;
			j=j+2;
		}
	
		j=j-4;
		c=1;
		d=2;	
		//loop to draw bottom half of hexagon
		while(d<len)
		{
			g=0;
			while(g<c)
			{
				fprintf(stdout, "%c", y);
				g=g+1;
			}
			c=c+1;
			fprintf(stdout, "%c", l);
			h=0;
			while(h<j)
			{
				fprintf(stdout, "%c", f);
				h=h+1;
			}
			fprintf(stdout, "%c\n", l);
			d=d+1;
			j=j-2;
		}
		x=1;
		i=0;
		//loops same as for the top line of hexagon, to draw bottom line
		while(x<len)
		{
			fprintf(stdout, "%c", y);
			x=x+1;
		}
		while(i<len)
		{
			fprintf(stdout, "%c", l);
			i=i+1;
		}
	}	

	//if statement allows you to change Line character if userinput for shape is 'l' or 'L'
	else if(shape=='l'||shape=='L')
	{
		//asks for new character for line
		fprintf(stdout, "\nType 'line' character and press ENTER: ");
		fscanf(stdin, " %c", &l);
		fprintf(stdout, "\n");
	}


	//if statement allows you to change Fill character if userinput for shape is 'f' or 'F'
	else if(shape=='f'||shape=='F')
	{
		//asks for new character for fill
		fprintf(stdout, "\nType 'fill' character and press ENTER: ");
		fscanf(stdin, " %c", &f);
		fprintf(stdout, "\n");

	}

}



	return(0);
}
