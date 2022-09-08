#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void primo(int x){
	float raiz = x^(1/2);
	int div = 2;
	while(div <= raiz){
		if(x % div == 0){
			printf("\nO Número NÃO é primo. \n\n");
			return;
		}
		div++;
	}
	printf("\nO número É primo. \n\n");
}

int main(){
	printf("\nDigite um número inteiro: ");
	int numero;
	scanf("%d", &numero);
	primo(numero);
}