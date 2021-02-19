#include <stdio.h>

int main ()
	
{
	int i=0, a=0xabcdef12;
	char *ptr = (char*)&a;

	while (i<sizeof(a))
	{
		printf ("\n%x",*ptr);
		ptr++;i++;
	}
}
