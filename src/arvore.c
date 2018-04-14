#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arvore.h"

void criarArvore(NoArvore **raiz){
    *raiz = NULL;
}

void insereNo(NoArvore **raiz, char dadoNovo[200], char resp) {
   if (*raiz == NULL ) {
  		*raiz=(NoArvore *)malloc(sizeof(struct NoArvore));
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

void destroiArvore(struct NoArvore *raiz) {
  if( raiz != 0 )
  {
      destroiArvore(raiz->esq);
      destroiArvore(raiz->dir);
      free( raiz );
  }
}
