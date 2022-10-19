//program for array
#include<stdio.h>
int main()
{
	int a[5],i,e=0,o=0;
	printf("Enter 5 Numbers: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("\n Even numbers are: ");
    for(i=0;i<=4;i++)
    {
	    if(i%2==0)
		{
			printf("\n %d",a[i]);
			e++;
		}
    }
    printf("\n Odd numbers are: ");
    for(i=0;i<=4;i++)
    {
    	 if(i%2!=0)
		{
			printf("\n %d",a[i]);
			o++;
		}
	}
	printf("\n\nTotal even numbers are : %d",e);
	printf("\n\nTotal Odd numbers are : %d",o);
}

