#include<stdio.h>

int main(void)
{
	int i=0;
	int res=0;
	
	for( i=1; i<=10; i++){
		res+=i;
	}
	
	printf("%d",res);

	return 0;

}