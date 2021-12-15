/*
 Data: 11/12/2021
 Aluno: Gabriel de Souza Almeida
 
 Programa 1: Uma escola deseja saber se existem alunos cursando, simultaneamente, 
 as disciplinas L�gica e Linguagem de Programa��o. 
 Coloque os n�meros das matriculas dos alunos que cursam L�gica em um vetor, 
 no m�ximo quinze alunos. Coloque os n�meros das matriculas dos alunos que cursam 
 Linguagem de Programa��o em outro vetor, no m�ximo dez alunos. 
 Mostre o n�mero das matriculas que aparecem nos dois vetores.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int matriclog[15], matricprog[10];
	
	for(int i=0; i<=14; i++){
		printf("Escreva a matricula do aluno(a) de L�gica: ");
		scanf("%i", &matriclog[i]);
	}
	for(int j=0; j<=9; j++){
		printf("Escreva a matricula do aluno(a) de Programa��o: ");
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
