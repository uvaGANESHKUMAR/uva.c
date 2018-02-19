#include<stdio.h>
int main()
{
int a,i;
long long factorial=1;
scanf("%d",&a);
if(a<0)
printf("factorial of negative number does not exit");
else 
{
	for (i=1;i<=a;++i)
	{
		factorial*=i;
		
	}
}
printf("%d",factorial);
return 0;
}
