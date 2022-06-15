#include <stdio.h>
#include <stdlib.h>

int par(int num){
		if(num%2==0)
		return 1;
			else
			return 0;
}

int main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(par(num))
	printf("%d eh par!",num);
	else
	printf("%d eh impar!",num);
	
	return 0;
}
