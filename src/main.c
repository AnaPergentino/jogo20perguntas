
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"


int main(){
	struct noArvore *jogo;
	char resposta;
	char arq[50] = "jogo.txt";
	char tree[50] = "arvore.txt";

	FILE* fp = fopen(arq, "r");
	FILE* fp2 = fopen(tree, "w");

	if(fp == NULL){
		printf("%s Erro na abertura do arquivo!\n", arq);
		exit(EXIT_FAILURE);
		return 0;
	}
	noArvore* raiz = gerarArvore(fp);
	printf("Jogo das 20 perguntas:\n");
	printf("Pense em algo...\n");
	printf("Responda sim ou não (Y/N)\n");
	imprimePergunta(&(*raiz));
	fclose(fp);
	fclose(fp2);
	return 0;
}
noArvore* gerarArvore (FILE* fp){
	noArvore *raiz;
	char dado[200];
	char resposta= 'Y';
	criarArvore(&raiz);
	while(fgets(dado, sizeof(dado),fp)!=NULL){
		//fgets(dado, sizeof(dado),fp);
		fscanf(fp, "%[^\n]", dado);
		insereNo((&raiz), dado, resposta);
	//	printf("%s",(raiz)-> dado);
	}
	return raiz;
}
void imprimePergunta(noArvore *raiz){
	char resposta;
	char dadoNovo[200];
	if (raiz!=NULL){
		//puts((raiz)->dado);
		printf("%s",(raiz)-> dado);
		scanf("%c", &resposta);
		if (resposta == 'Y'){
			imprimePergunta((raiz)->dir);
		}
		else if (resposta == 'N'){
			imprimePergunta((raiz)->esq);
		}
	}
	else if (raiz==NULL) {
		char resp='L';
		printf("Insira uma pergunta:");
		scanf("%s", dadoNovo);
		insereNo(&(raiz), dadoNovo, resp);
	}
}
