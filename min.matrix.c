#include<stdio.h>
int main()
{
	int a[3][3],i,j,min;
	printf("Enter 9 no. for: \n");
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
	printf("\nMin no.s in each row are: \n");
	for(i=0;i<=2;i++)
	{
			min=a[i][0];
		for(j=0;j<=2;j++)
		{
			if(a[i][j]<min)
			{
	        min=a[i][j];
	       }
		}
		printf(" %d",min);
		printf("\n");
	}
}
