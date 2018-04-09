
typedef struct NoArvore *raiz;//Ponteiro para raíz da árvore

struct NoArvore {
   string dado;         // dado do nó
   NoArvore *esq;   // nó esquerdo corresponde a sim YES.
   NoArvore *dir;  // nó esquerdo corresponde a não NO.

};
