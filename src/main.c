
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"
#include "arvore.h"

NoArvore *jogo;
FILE *jogo;

int main(){
	char resposta;

	FILE* fp = fopen(arq, "rw");

	if(fp == NULL){
			printf("%s Erro na abertura do arquivo!\n", arq);
			exit(EXIT_FAILURE);
			return NULL;
	}

	printf("Jogo das 20 perguntas:");
	printf("Pense em algo...");
	printf("Responda sim ou não (Y/N)");



}

imprimePergunta(char dado[]){
	printf("%s", dado);
	scanf("%c", &resposta);
	if (resposta == Y){
		imprimeResposta(dado);
	}
	else if (resposta == N){
		proximaPergunta();
	}
}


void gerarArvore(){

}
