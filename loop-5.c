#include<stdio.h>

int main(){
	int n,i;
	
	printf("Enter last number:");
	scanf("%d",&n);
	 i=1;
	while(i<=n)
	{
		if(i%2==1)
			printf("\n%d",i);
			i++;
	}
	return 0;
}