#include<stdio.h>
int main()
{
	int i,N;
	printf("The value of N is ");
	scanf("%d",&N);
	for(i=2;i<=N;i+=2)
	printf("%d",i);
	return 0;
}
