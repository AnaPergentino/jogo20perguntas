#include <gtest/gtest.h>
#include "arvore.h"

TEST(ArvoreTest, NovaArvoreTest){
	NoArvore tree = criarArvore(raiz);
	ASSERT_NE((NoArvore)NULL, tree);
	EXPECT_EQ(strcmp(tree->dado, "Arvore Teste"), 0);
	EXPECT_EQ(tree->esq, 0);
	EXPECT_EQ(tree->dir, 0);
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
