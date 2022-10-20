#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter 9 no. for a: \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix A: \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter 9 no. for b : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix B: \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	printf("\nAddion is : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",c[i][j]=a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
}
