#include <stdio.h>

int main(){ 
	int i,n;
	i =1;
	
	printf("Enter the value of N: ");
	scanf("%d",&n);

	while(i <= n){
		printf("%d\n",i);
		i++;
	}

	return 0;
}