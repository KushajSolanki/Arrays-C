#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("Enter 9 no. for a: \n");
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
	printf("Sum of No.s in matrix is: \n");
	for(i=0;i<=2;i++)
	{
		sum=0;
		for(j=0;j<=2;j++)
		{
			sum=sum+a[i][j];
		}
		printf("%d",sum);
		printf("\n");
	}
		
}
