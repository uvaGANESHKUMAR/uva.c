#include<stdio.h>
int main()
{
   int a,i,b=5,ans=1,c=0;
   scanf("%d",&a);
   if(a==0 && a<=-1)
   {
   	printf("%d",c);
   }
   else
   {
	for(i=1;i<=b;i++)
	{
		ans=a*i;
		printf("%d ",ans);
	}
   }
   return 0;
}
