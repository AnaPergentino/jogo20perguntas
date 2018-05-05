
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"


int main(){
	struct noArvore *jogo;
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
	imprimePergunta(&(*raiz));
	fclose(fp);
	fclose(fp2);
	return 0;
}
noArvore* gerarArvore (FILE* fp){
	noArvore **raiz;
	char dado[200];
	char resposta;
	criarArvore(raiz);
	while(!feof(fp)){
		fscanf(fp, "%s - %c\n", dado, &resposta);
		insereNo((raiz), dado, resposta);
	}
	return *raiz;
}
void imprimePergunta(noArvore *raiz){
	char resposta;
	char dadoNovo[200];
	if ((raiz)->dado != NULL){
		puts((raiz)->dado);
		printf("%s",(raiz)-> dado);
		scanf("%c", &resposta);
		if (resposta == 'Y'){
			imprimePergunta((raiz)->dir);
		}
		else if (resposta == 'N'){
			imprimePergunta((raiz)->esq);
		}
	}
	else if ((raiz)->dado == NULL){
		printf("Insira uma pergunta:");
		scanf("%s", dadoNovo);
		char resp='Y';
		insereNo(&(raiz), dadoNovo, resp);
	}
}
