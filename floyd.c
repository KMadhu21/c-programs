#include<stdio.h>
main()
{
	int n,i,j,sum=1;
	printf("enter the no.of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",sum);
			sum++;
		}
		printf("\n");
	}

}
