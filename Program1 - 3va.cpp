/*
 Data: 11/12/2021
 Aluno: Gabriel de Souza Almeida
 
 Programa 1: Uma escola deseja saber se existem alunos cursando, simultaneamente, 
 as disciplinas Lógica e Linguagem de Programação. 
 Coloque os números das matriculas dos alunos que cursam Lógica em um vetor, 
 no máximo quinze alunos. Coloque os números das matriculas dos alunos que cursam 
 Linguagem de Programação em outro vetor, no máximo dez alunos. 
 Mostre o número das matriculas que aparecem nos dois vetores.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int matriclog[15], matricprog[10];
	
	for(int i=0; i<=14; i++){
		printf("Escreva a matricula do aluno(a) de Lógica: ");
		scanf("%i", &matriclog[i]);
	}
	for(int j=0; j<=9; j++){
		printf("Escreva a matricula do aluno(a) de Programação: ");
		scanf("%i", &matricprog[j]);
	}
		for(int i=0; i<=14; i++){
			for(int j=0; j<=9; j++){
		if(matriclog[i] == matricprog[j]){
			printf("\nAluno(a) com matricula %i pertence aos 2 cursos", matriclog[i]);
		}
	  }
	}
	
}
