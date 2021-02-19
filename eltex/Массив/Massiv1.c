#include <stdio.h>
#define N 5
main()
{
	int arr[N][N], i,j,k=0;

	for (i=0;i<N;i++)
	{
		printf ("\n");
		for (j=0;j<N;j++)
		{
			arr[i][j]=k+1; k++;
			printf ("%d\t ",arr[i][j]);
		}
	}
}