#include<stdio.h>
int main()
{
	int i=1,s=1,N;
	printf("The vale of N is");
	scanf("%d",&N);
	while(i<=N)
{
	s=s*i;
	i++;
}
    printf("%d",s);
    return 0;
}
