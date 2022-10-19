//program for descending array
#include<stdio.h>
int main()
{
	int a[5],i,j,t;
	printf("Enter 5 Numbers: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDescending order: \n");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
	}
}
