typedef struct NoArvore *raiz;//Ponteiro para raíz da árvore

struct NoArvore {
   int nivel;
   char dado[200];
   NoArvore *esq;   // nó esquerdo corresponde a sim YES.
   NoArvore *dir;  // nó esquerdo corresponde a não NO.
};
