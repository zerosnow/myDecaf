#include "SymbolTree.h"
#include "SymbolTable.h"

#include <stdlib.h>
#include <stdio.h>

struct SymbolTableNode *root;
struct SymbolTableNode *list;	//用于清空tableTree

struct SymbolTableNode *createRoot()
{
	list = NULL;
	root = (struct SymbolTableNode *)malloc(sizeof(struct SymbolTableNode));
	root->header = createSymbolTable();
	root->parents = NULL;
	return root;
}

struct SymbolTableNode *createTableNode(struct SymbolTableNode *newParents)
{
	struct SymbolTableNode *temp;
	temp = (struct SymbolTableNode *)malloc(sizeof(SymbolTableNode));
	temp->header = createSymbolTable();
	temp->parents = newParents;
	//插入结点的链表便于删除
	temp->next = list;
	list = temp;
	return temp;
}

void clearSymbolTree()
{
	struct SymbolTableNode *temp, *pretemp;
	temp = list;
	while(temp != NULL) {
		pretemp = temp;
		temp = temp->next;
		clearSymbolTable(&(pretemp->header));
		free(pretemp);
	}
}

struct SymbolNode *findSymbolFromTree(struct SymbolTableNode *node, char *symbolName)
{
	struct SymbolNode *result;
	while(node != NULL)
	{
		result = findSymbol(node->header, symbolName);
		if (result != NULL) return result;
		node = node->parents;
	}
	return NULL;
}

void printTable(struct SymbolTableNode *node)
{
	int i;
	struct SymbolNode *temp;
	for (i = 0; i < 53; i++)
	{
		for (temp = node->header[i].symbolNode; temp != NULL; temp = temp->next)
			printf("%s %d %d %d\n", temp->name, temp->type, temp->dataType, temp->addr);
	}
	if (node->parents != NULL)
		printTable(node->parents);
}