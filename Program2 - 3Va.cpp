/*
 Data: 11/12/2021
 Aluno: Gabriel de Souza Almeida
 
 Programa 2: Preencha um vetor de 10 valores inteiros aleatórios e escreva de forma ordenada.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[10];
	int i,j,aux;
	
	for(i=0; i<=9; i++){
		printf("Digite um número: ");
		scanf("%i", &vetor[i]);
	}
	printf("Ordem ordenada é: \n");
		for(i=0; i<=9; i++){
			for(j=i+1; j<=9; j++){
				if(vetor[i] > vetor[j]){
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
			}
			
		}
	}
	for(i=0; i<=9; i++){
	printf("%i\n", vetor[i]);}
}
