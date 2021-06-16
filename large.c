#include<stdio.h>
main()
{
	int a,b,c,big;
	printf("enter the values of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?(a>c? a:c):(b>c? b:c);
	printf("the biggest number is %d",big);
}
