
void criarArvore(No **raiz){
    *raiz = NULL;
}

void insereNo(NoArvore **raiz, string dadoNovo) {
   if ( *raiz == NULL ) {
 	    *raiz=(NoArvore *)malloc(sizeof (NoArvore));
      (*raiz)->esq=NULL;
    	(*raiz)->dir=NULL;
      (*raiz)->dado=dadoNovo;
      return;
   }
   else if ( dadoNovo < ((*raiz)->dado) ) {
      insereNo( &(*raiz)->esq, dadoNovo );
   }

   else {
      insereNo( &(*raiz)->dir, dadoNovo );
   }
}
