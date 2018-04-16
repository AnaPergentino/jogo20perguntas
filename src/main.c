
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"
#include "arvore.h"


int main(){
	noArvore *jogo;
	char resposta;
	char arq[50] = "jogo.txt";
	char tree[50] = "arvore.txt";

	FILE* fp = fopen(arq, "rw");
	FILE* fp2 = fopen(tree, "rw");

	if(fp == NULL){
		printf("%s Erro na abertura do arquivo!\n", arq);
		exit(EXIT_FAILURE);
		return 0;
	}
	noArvore* raiz = gerarArvore(fp);
	printf("Jogo das 20 perguntas:");
	printf("Pense em algo...");
	printf("Responda sim ou não (Y/N)");
	imprimePergunta(raiz);
	fclose(fp);
	fclose(fp2);

}
noArvore* gerarArvore (FILE* fp){
	noArvore **raiz = NULL;
	criarArvore(raiz);
	while(fscanf(fp, "%s")>0){
		fgetc(fp); fgetc(fp); //limpa o buffer pra ler o resto dos dados da linha
		char dado[200];
		fscanf(fp, "%s %d %d \n", &dado, &esq, &dir);
		insereNo(*raiz, dado);
	}
	return raiz;
}
void imprimePergunta(char dado[]){
	printf("%s", dado);
	scanf("%c", &resposta);
	if (resposta == Y){
		//	imprimeResposta(dado);
	}
	else if (resposta == N){
		imprimePergunta((*raiz)->esq);
	}
}
