#include<stdio.h>
main()
{
	int n,r,temp,rev=0;
	printf("enter n");
	scanf("%d",&n);
	temp=n;
	while (n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if (temp==rev)
	printf("%d is a palindrome",temp);
	else
	printf("%d is not a palindrome",temp);
	
}
