//program for array
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter 5 Numbers: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("Even Numbers are: \n");
    for(i=0;i<=4;i++)
    {
    	if(a[i]%2==0)
		{
			printf(" %d\n",a[i]);
		}
	}
}


