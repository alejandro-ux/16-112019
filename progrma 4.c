
#include<stdio.h>
	int main(){
	int altura, edad, peso_recomendado;
	 printf("\n ingrese su altura en centimetros:");
	 scanf("%d",&altura);
	  printf("\n ingrese su edad:");
	   scanf("%d",&edad);
	      peso_recomendado=((altura-100)+(.10*edad)*0.9);
		   printf("\n el peso recomendado es:%d",peso_recomendado);
return 10;}
