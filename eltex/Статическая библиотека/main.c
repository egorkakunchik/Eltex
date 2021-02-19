#include <stdio.h>
# include "lib.h"
int main ()
{
	int v;
	float a,b;

	while (1)
	{
		printf ("\n1)Add\n2)Mult\n3)Subt\n4)Div\n5)Exit\n\nEnter choice:");
		scanf ("%d",&v);
		switch (v)
		{
			case 1:
        		        printf ("\n\nEnter 2 num: ");
		                scanf ("%f%f",&a,&b);
				a=sum(a,b);
				printf ("%f",a);
				break;
			case 2:
                		printf ("\n\nEnter 2 num: ");
				scanf ("%f%f",&a,&b);
				a=mult(a,b);
				printf ("%f",a);
				break;
                        case 3:
               			printf ("\n\nEnter 2 num: ");
		                scanf ("%f%f",&a,&b);
                                a=subt(a,b);
                                printf ("%f",a);
                                break;
                        case 4:
		                printf ("\n\nEnter 2 num: ");
		                scanf ("%f%f",&a,&b);
                                a=div(a,b);
                                printf ("%f",a);
                                break;
                        case 5:
                                exit(1);
				break;
			default:
				printf ("\nInvalid choice!\n");
				break;
		}
	}
}
