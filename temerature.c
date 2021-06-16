#include<stdio.h>
main()
{
	float c,f,cel,faren;
	printf("enter celsius value");
	scanf("%f",&c);
	faren=(c*1.8)+32;
	printf("the equivalent farenheit temperature is :%0.2f\n",faren);
	printf("enter farenheit value");
	scanf("%f",&f);
	cel=(f-32)/1.8;
	printf("\nthe equivalent celsius value is :%0.2f",cel);
}
