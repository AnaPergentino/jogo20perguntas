
typedef struct noArvore {
   char dado[200];
   struct noArvore *esq;   // nó esquerdo corresponde a sim YES.
   struct noArvore *dir;  // nó esquerdo corresponde a não NO.
} Raiz; // raíz da árvore


void criarArvore(noArvore **raiz);
void insereNo(noArvore **raiz, char dadoNovo[200], char resp);
void destroiArvore(struct noArvore *raiz);
