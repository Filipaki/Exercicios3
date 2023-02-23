#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int num, num2;

printf("insira o primeiro numero:");
	scanf("%d", &num);	
printf("insira o segundo numero:");
	scanf("%d", &num2);	

if (num>num2){
	printf("o primeiro numero e maior que o segundo");
}
else{
	printf("o segundo numero e maior que o primeiro");
}
return 0;	
}