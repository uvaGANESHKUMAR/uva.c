#include<stdio.h>
#include<math.h>
main()
{
	int a,b,result;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	printf("\n the power value is:");
	result=pow(a,b);
	printf("%d",result);
	return 0;
}
