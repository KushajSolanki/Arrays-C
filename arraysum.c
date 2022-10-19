//program for array
#include<stdio.h>
int main()
{
	int a[5],i,sum;
	printf("Enter 5 Numbers: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Addition is %d",sum);
}
