#include<stdio.h>
main()
{
	int n,i,count=0;
	printf("enter the value of n");
	scanf("%d",&n);
	i=1;
	while(i<=n/2)
	{
		if (n%i==0)
		count++;
		i++;
	}
	if (count==1)
	printf("%d is a prime number",n);
	else if (n==1)
	printf("%d is neither prime nor composite",n);
	else
	printf("%d is not a prime number",n);
}
