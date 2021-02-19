#include <stdio.h>
#define N 7
main()
{
	int arr[N][N],i,j,k=0,a=0,n=N;

	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			arr[i][j]=0;

	while (n>0)
	{
		i=a;
		for (j=a;j<n;j++)
		{
			arr[i][j]=++k;
		}

		j=n-1;

		for (i=a+1;i<n;i++)
		{
			arr[i][j]=++k;
		}

		i=n-1;

		for (j=n-2;j>=a;j--)
		{
			arr[i][j]=++k;
		}
		
		j=a;

		for (i=n-2; i>a; i--)
		{
			arr[i][j]=++k;
		}
		n--;
		a++;

	}
	for (i=0;i<N;i++)
	{
		printf ("\n");
		for (j=0;j<N;j++)
		{
			printf ("%d\t",arr[i][j]);
		}
	}

}