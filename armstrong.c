#include<stdio.h>
#include<math.h>
main()
{
	int n,temp,r,sum=0,digits=0;
	printf("enter the value of n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		digits++;
		temp=temp/10;
	}
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,digits);
		n=n/10;
	}
	if (temp==sum)
	printf("%d is a armstrong number",temp);
	else
	printf("%d is not a armstrong number",temp);
}
