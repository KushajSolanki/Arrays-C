//program for max
#include<stdio.h>
int main()
{
	int a[5],i,max,index;
	printf("Enter 5 Numbers: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			index=i+1;
		}
	}
	printf("Max is %d found at position %d",max,index);
}
