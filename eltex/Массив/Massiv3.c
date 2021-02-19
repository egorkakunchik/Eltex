#include <stdio.h>
#define N 5
main()
{
	int arr[N][N],i,j;
	for (i=0;i<N;i++)
	{
		printf ("\n");
		for (j=0;j<N;j++)
		{
			if (i+j>=N-1)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j]=0;
			}
			printf ("%d ", arr[i][j]);
		}
	}
}