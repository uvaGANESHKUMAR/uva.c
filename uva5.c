#include <stdio.h>
 
int main()
{
	int i,j,a,b,sum=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		sum=0;
	for(j=1;j<b;j++)
		{
			if(i%j==0)
 
			sum++;
 
	}
		if(sum==2)
 
	printf("%d",i);
 
	}
 
	return 0;
}
