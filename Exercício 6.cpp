#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int num){
	int div;
	for(div=2;div<num;div++){
		if(num%div==0)
		return 0;
	}
	return 1;
}

int qtdPrimos(int num){
	int cont,qtd=0;
	for(cont=1;cont<=num;cont++){
		if(ehPrimo(cont)==1)
		qtd++;
	}
	return qtd;

}

int main(){
		
	int n, resp;
	printf("Infome o valor de N: ");
	scanf("%d",&n);
	
	resp =qtdPrimos(n);
	
	printf("Quantidade de numeros primos entre 1 e %d: %d\n",n,resp);	
	return 0;
	}

