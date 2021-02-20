#include <stdio.h>
#include <string.h>
main()
{
	
	FILE *ff, *fptr;
	int i;
	if ((ff = fopen("test.dat", "wb")) == NULL) {
		printf("Error! opening file");
	//exit(1);
	}
	char str[10],c[80];
	ff = fopen("test.dat", "w");
	printf ("Enter:");
	for (i=0;i<10;i++)
	{
		scanf ("%c",&str[i]);
		fprintf (ff, "%c", str[i]);
	}
	fclose (ff);

	fptr = fopen("test.dat", "rb");
	fscanf(fptr, "%[^\n],", c);
	printf ("\ndata:");

	for (i=10;i>=0;i--)
		printf ("%c",c[i]);
	fclose(fptr);

return 0;
}
	

