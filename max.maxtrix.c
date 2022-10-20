#include<stdio.h>
int main()
{
	int a[3][3],i,j,max;
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
	printf("\nMax no.s in each row are: \n");
	for(i=0;i<=2;i++)
	{
			max=a[i][0];
		for(j=0;j<=2;j++)
		{
			if(a[i][j]>max)
			{
	        max=a[i][j];
	       }
		}
		printf(" %d",max);
		printf("\n");
	}
}
