#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int num;

printf("insira sua idade:");
	scanf("%d", &num);	

if (num>18 || num==18 ){
	printf("voce e maior de idade");
}
else{
	printf("voce e menor de idade");
}
return 0;	
}