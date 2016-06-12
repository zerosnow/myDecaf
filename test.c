#include "ASTtree.h"
#include "SymbolTree.h"

void test(struct Node *header)
{
	int i;
	if (header->num == 0)return ;
	if (header->nodeType == Node_ReturnStmt){
		printTable(header->symbolTableNode);
	}
	for (i = 0; i < header->num; i++) {
		test(header->node[i]);
	}
}