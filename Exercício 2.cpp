#include <stdio.h>
#include <stdlib.h>

int potencia(int base,int exp){
		int  pot=1,cont;
		
		for(cont=1;cont<=exp;cont++){
			pot = pot * base;
		}
return pot;	
}

int main(){
		int base, exp, resp;
		
		printf("Digite a base: ");
		scanf("%d",&base);
		printf("Digite o expoente: ");
		scanf("%d",&exp);
		
		resp=potencia(base,exp);
		printf("Resultado = %d",resp);
			
}
