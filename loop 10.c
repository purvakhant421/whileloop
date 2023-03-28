#include<stdio.h>

int main(){
	int n,i;

	printf("Enter last number:");
	scanf("%d",&n);
	 i=1;
	while(i<=10)
	{
		printf("\n%d X %d = %d",n,i,n*i);
		i++;
	}
	return 0;

}