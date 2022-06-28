#include<stdio.h>  

int fatorial(int n)  
{  
   int i,res=1;
   for(i=1;i<=n;i++)
     res*=i;
    
  return res;
 	 
}  
   
int main()  
{  
  int num;  
  int fat;  
  printf("Digite um numero : ");  
  scanf("%d", &num);   
   
  fat = fatorial(num);  
  printf("Factorial de %d eh %d\n", num, fat);  
  return 0;  
}
