#include <stdio.h>

main ()
{
	int a=0xABCDEF12,c=0,i=0;
	while (a!=0xffffffff)
	{
		i++;
		c=a;
		c=c & 0x000000FF;
		printf ("%x\n",c);
		a=a»8;

	}
}