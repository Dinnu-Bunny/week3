#include<stdio.h>
int main()
{
	int i=0,N,r;
	printf("The value of N is");
	scanf("%d",&N);
	while(N!=0)
{
	i++;
	N=N/10;
}
    printf("%d",i);
    return 0;
}
