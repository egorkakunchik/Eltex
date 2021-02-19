#include <stdio.h>
#include "library.h"
main()
{
	int c;
	float a,b;
while (1)
{
	printf ("\n1)ADD\n2)SUB\n3)DIV\n4)MULT\n5)EXIT\nEnter:");
	scanf ("%d",&c);
	printf ("\nEnter num:\n");
	switch(c)
	{
		case 1:
       			scanf ("%f",&a);
		        scanf ("%f",&b);
			a=add(a,b);
			printf ("\n%f\n",a);
			break;
		case 2:
       			scanf ("%f",&a);
		        scanf ("%f",&b);
			a=sub(a,b);
			printf ("\n%f\n",a);
			break;
		case 3:
       			scanf ("%f",&a);
		        scanf ("%f",&b);
			a=div(a,b);
			printf ("\n%f\n",a);
			break;
		case 4:
       			scanf ("%f",&a);
		        scanf ("%f",&b);
			a=mult(a,b);
			printf ("\n%f\n",a);
			break;
		case 5:
			exit(1);
			break;
		default:
			printf("ERROR! 1-5");
			break;

	}
}
}

