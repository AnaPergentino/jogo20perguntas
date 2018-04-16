#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arvore.h"

void criarArvore(noArvore **raiz){
    *raiz = NULL;
}

void insereNo(noArvore **raiz, char dadoNovo[200], char resp) {
   if (*raiz == NULL ) {
  		*raiz=(noArvore *)malloc(sizeof(struct noArvore));
  		(*raiz)->esq = NULL;
  		(*raiz)->dir = NULL;
  		strcpy(((*raiz)->dado),dadoNovo);
  		puts((*raiz)->dado);
   }
   else if ( resp == 'Y'/* dadoNovo < ((*raiz)->dados)*/ ) {
      insereNo( &(*raiz)->esq, dadoNovo, resp );
   }

   else if ( resp == 'N' ){
      insereNo( &(*raiz)->dir, dadoNovo, resp );
   }
}

void destroiArvore(struct noArvore *raiz) {
  if( raiz != 0 )
  {
      destroiArvore(raiz->esq);
      destroiArvore(raiz->dir);
      free( raiz );
  }
}
