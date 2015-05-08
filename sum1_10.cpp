#include<stdio.h>

int main(void)
{
	int i=0;
	int res=0;
	int j=0;

	printf("input:");
	scanf("%d",&j);

	for( i=1; i<=j; i++){
		res+=i;
	}
	
	printf("%d",res);

	return 0;

}