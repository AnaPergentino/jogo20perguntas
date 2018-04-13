#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arvore.h"

void criarArvore(NoArvore **raiz){
    *raiz = NULL;
}

void insereNo(NoArvore **raiz, char dadoNovo[200]) {
   if (*raiz == NULL ) {
		*raiz=(NoArvore *)malloc(sizeof(struct NoArvore));
		(*raiz)->esq = NULL;
		(*raiz)->dir = NULL;
		strcpy(((*raiz)->dado),dadoNovo);
		puts((*raiz)->dado);
   }/*
   else if ( dadoNovo < ((*raiz)->dados) ) {
      insereNo( &(*raiz)->esq, dadoNovo );
   }

   else {
      insereNo( &(*raiz)->dir, dadoNovo );
   }*/
}

void strcpy (char dest[200], char orig[200]){
	int i;
	for (i=0; i<strlen(orig); i++){
		dest[i]=orig[i];
	}
	dest[i]='/';
	dest[i+1]='0';
}
