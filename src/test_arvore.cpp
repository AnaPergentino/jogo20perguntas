#include <gtest/gtest.h>
#include "arvore.h"

TEST(ArvoreTest, NovaArvoreTest){
	NoArvore tree = criarArvore(raiz);
	ASSERT_NE((NoArvore)NULL, tree);
	EXPECT_EQ(strcmp(tree->dado, "Pessoa Teste"), 0);
	EXPECT_EQ(tree->esq, 0);
	EXPECT_EQ(tree->dir, 0);
}

TEST(ProdutoTest, NovoProdutoTest){
	Produto p = CriarProduto("Carona para Samambaia", "Uma carona para Q5 da Samambaia", SERVICO, 0);
	ASSERT_NE((Produto)NULL, p);
	EXPECT_EQ(strcmp(p->nome, "Carona para Samambaia"), 0);
	EXPECT_EQ(strcmp(p->descricao, "Uma carona para Q5 da Samambaia"), 0);
	EXPECT_EQ(p->tipo, SERVICO);
}



int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
