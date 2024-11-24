#include<stdio.h>
int main()
{
	 int a1=0,a2=1,n,s,i;
	printf("The value of n is");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
	s=a2;
	a2=a1+a2;
	a1=s;
    }
    printf("%d",a2);
    return 0;
	
}
