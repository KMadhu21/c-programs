#include<stdio.h>
main()
{
	int n,sum=0,r;
	printf("enter the value of n");
	scanf("%d",&n);
	if (n>0)
	{
		while (n!=0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
		printf("%d",sum);
	}
	else
	printf("you have entered negative number");
}
