#include <stdlib.h>
#include <stdio.h>

int fib(int n){
	int i,primeiro=1, segundo=1,soma=0;
	
	for(i=4;i<=n;i++){
	soma= primeiro + segundo;
	primeiro=segundo;
	segundo =soma;
}
	return segundo;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",fib(n));
}
