#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
char let;

printf("insira uma letra:");
	scanf("%c", &let);	

if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u'){
	printf("a letra e uma vogal");
}
else{
	printf("a letra e uma consoante");
}
return 0;	
}