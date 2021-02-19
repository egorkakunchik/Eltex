#include <stdio.h>

main()
{
	int a =0x12345678, c=0,b=0;
	printf ("Ur number=%x;\nEnter number bit (1...4):",a);
	scanf ("%d",&c);

	while (c>4)
	{
		printf ("ONLY 4 BIT!!!\n Enter number bit:");
		scanf ("%d",&c);
	}

	printf ("Enter bit (later j...z = 0):");
	scanf ("%x",&b);

	while (b>0x000000ff)
	{
		printf ("ERROR BIT!!! Enter bit (later j...z = 0):");
		scanf ("%x",&b);
	}
	b=b«((c-1)*8);

	switch (c){

		case 1:
			a=a&0xFFFFFF00|b;
			printf ("\nComplite: %x ",a);
			break;

		case 2:
			a=a&0xFFFF00FF|b;
			printf ("\nComplite: %x ",a);
			break;

		case 3:
			a=a&0xFF00FFFF|b;
			printf ("\nComplite: %x ",a);
			break;

		case 4:
			a=a&0x00FFFFFF|b;
			printf ("\nComplite: %x ",a);
			break;

}
}