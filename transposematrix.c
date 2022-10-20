//program for column matrix addition
#include<stdio.h>
int main()
{
	int a[3][3],i,j,t;
	printf("Enter 9 Numbers : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=i+1;j<=2;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
    printf("\nTrans of Matrix A is: \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
}
