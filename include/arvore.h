typedef struct noArvore *raiz;//Ponteiro para raíz da árvore

struct noArvore {
   int nivel;
   char dado[200];
   noArvore *esq;   // nó esquerdo corresponde a sim YES.
   noArvore *dir;  // nó esquerdo corresponde a não NO.
};


void criarArvore(noArvore **raiz);
void insereNo(noArvore **raiz, char dadoNovo[200], char resp);
void destroiArvore(struct noArvore *raiz);
