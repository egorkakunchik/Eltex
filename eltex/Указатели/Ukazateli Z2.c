#include <stdio.h>

main()
{
	int a=0xabcdef12,c,b;
	char *ptr=(char *)&a;

	printf ("Enter number byte:");
	scanf ("%d",&c);

	printf ("\nEnter byte:");
	scanf ("%x",&b);

	switch (c)
	{
		case 1:
			*ptr=b;
			printf ("\nComplite: %x ",a);
			break;
		case 2:
			ptr=ptr+c-1;
			*ptr=b;
			printf ("\nComplite: %x ",a);
			break;
		case 3:
			ptr=ptr+c-1;
			*ptr=b;
			printf ("\nComplite: %x ",a);
			break;
		case 4:
			ptr=ptr+c-1;
			*ptr=b;
			printf ("\nComplite: %x ",a);
			break;

		} 
	}
