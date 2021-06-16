#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,root1,root2;
	printf("enter the values of a,b and c");
    scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if (d>0)
	{
		printf("\nthe roots are real and distinct");
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("\nroot1=%f\nroot2=%f",root1,root2);
	}
	else if (d==0)
	{
		printf("\nthe roots are real and equal");
		root1=-b/(2*a);
		root2=root1;
		printf("\nroot1=%f\nroot2=%f",root1,root2);
	}
	else
	printf("the roots are imaginary");
}
