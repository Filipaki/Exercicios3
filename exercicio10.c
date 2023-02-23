#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int ida, rend;

printf("insira sua idade:");
	scanf("%d", &ida);	
printf("insira sua renda:");
	scanf("%d", &rend);	
	
if (ida>18 && rend>1500){
	printf("voce e elegivel para receber benefinios.");
}
else{
	printf("voce nao e elegivel para receber benefinios.");
}
return 0;	
}