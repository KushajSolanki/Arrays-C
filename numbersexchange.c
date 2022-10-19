#include<stdio.h>
int main()
{
	int a=10,b=20,t;
	
	t=a;
	a=b;
	b=t;
	printf("%d %d",a,b);
}
