#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int num;

printf("insira um numero positivo ou negativo aleatorio:");
	scanf("%d", &num);	

if (num>1 || num==1){
	printf("o nomero e igual ou maior que 1");
}
else if(num==0){
	printf("o numero e 0");
}
else if(num==-1|| num<-1){
	printf("o numero e igual o menor que -1");
}
return 0;	
}