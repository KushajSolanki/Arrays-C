//program for reverse array
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter 5 Numbers: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Numbers are: \n");
	for(i=4;i>=0;i--)
	{
	printf("%d\n",a[i]);
    }
}

