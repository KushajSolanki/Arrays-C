#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
	printf("Enter 5 numbers for a: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter 5 Numbers for b: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=4;i++)
	{
		c[i]=a[i]+b[i];
		printf("\n%d",c[i]);
	}
}
