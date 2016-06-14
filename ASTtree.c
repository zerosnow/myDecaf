#include "ASTtree.h"
#include "SymbolTree.h"
#include "ClassTable.h"
#include "ThreeAddCode.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

unsigned int label = 0;
char truelists[10];
char falselists[10];
char nextlists[10];
char loop[10];

void error(char *log, char *name);

struct Node *mkNode(NodeType type, int num, ...)
{
	va_list valist;
	int i, nodeSize;
	struct Node *newNode;
	nodeSize = sizeof(struct Node) + (num-1) * sizeof(struct Node *);
	//printf("nodeSize = %d\n", nodeSize);
	if ((newNode = (struct Node *)malloc(nodeSize)) == NULL)
		printf("out of memory");
	newNode->astType = Node_struct;
	newNode->nodeType = type;
	newNode->dataType = DataType_noDef;
	newNode->tac = NULL;
	newNode->place[0] = '\0';
	newNode->num = num;
	va_start(valist, num);
	for (i = 0; i < num; i++)
		newNode->node[i] = va_arg(valist, struct Node *);
	va_end(valist);
	return newNode;
}

struct Node *mkLeaf_const_int(int value)
{
	int nodeSize;
	struct Node *newNode;
	nodeSize = sizeof(struct Node);
	if ((newNode = (struct Node *)malloc(nodeSize)) == NULL)
		printf("out of memory");
	newNode->astType = Leaf_constant;
	newNode->dataType = DataType_int;
	newNode->intValue = value;
	newNode->tac = NULL;
	sprintf(newNode->place, "%d", value);
	newNode->num = 0;
	return newNode;
}

struct Node *mkLeaf_const_bool(int value)
{
	int nodeSize;
	struct Node *newNode;
	nodeSize = sizeof(struct Node);
	if ((newNode = (struct Node *)malloc(nodeSize)) == NULL)
		printf("out of memory");
	newNode->astType = Leaf_constant;
	newNode->dataType = DataType_bool;
	newNode->boolValue = value;
	newNode->tac = NULL;
	sprintf(newNode->place, "%d", value);
	newNode->num = 0;
	return newNode;
}

struct Node *mkLeaf_const_string(char *value)
{
	int nodeSize;
	struct Node *newNode;
	nodeSize = sizeof(struct Node);
	if ((newNode = (struct Node *)malloc(nodeSize)) == NULL)
		printf("out of memory");
	newNode->astType = Leaf_constant;
	newNode->dataType = DataType_bool;
	newNode->stringValue = (char *)malloc(strlen(value)+1);
	strcpy(newNode->stringValue, value);
	newNode->tac = NULL;
	strcpy(newNode->place, value);
	newNode->num = 0;
	return newNode;
}

struct Node *mkLeaf_variable(char *value)
{
	int nodeSize;
	struct Node *newNode;
	nodeSize = sizeof(struct Node);
	if ((newNode = (struct Node *)malloc(nodeSize)) == NULL)
		printf("out of memory");
	newNode->astType = Leaf_variable;
	newNode->dataType = DataType_noDef;
	newNode->name = (char *)malloc(strlen(value)+1);
	strcpy(newNode->name, value);
	strcpy(newNode->place, value);
	newNode->tac = NULL;
	newNode->num = 0;
	return newNode;
}

struct Node *mkLeaf_type(DataType dataType)
{
	int nodeSize;
	struct Node *newNode;
	nodeSize = sizeof(struct Node);
	if ((newNode = (struct Node *)malloc(nodeSize)) == NULL)
		printf("out of memory");
	newNode->astType = Leaf_type;
	newNode->dataType = dataType;
	newNode->tac = NULL;
	newNode->place[0] = '\0';
	newNode->num = 0;
	return newNode;
}

struct Node *mkLeaf_other(LeafType type)
{
	int nodeSize;
	struct Node *newNode;
	nodeSize = sizeof(struct Node);
	if ((newNode = (struct Node *)malloc(nodeSize)) == NULL)
		printf("out of memory");
	newNode->astType = Leaf_other;
	newNode->leafType = type;
	newNode->tac = NULL;
	newNode->place[0] = '\0';
	newNode->num = 0;
	return newNode;
}

void printAST(struct Node *head)
{
	//int i;
	switch(head->nodeType)
	{
		/*case no_Leaf:
		printf("%s:\n", head->name);
		for(i = 0; i < head->num; i++)
			printAST(head->node[i]);
		break;
		case int_Leaf:
		printf(" %d ", head->intValue);
		break;
		case string_Leaf:
		printf(" %s ", head->stringValue);
		break;
		case name_Leaf:
		printf(" %s ", head->name);
		break;
		case logic_Leaf:
		printf(" %d ", head->logicValue);
		break;
		case NULL_Leaf:
		printf(" null ");
		break;
		case Blank_Leaf:
		printf(" ");
		break;
		case this_Leaf:
		printf(" this ");
		break;
		case break_Leaf:
		printf(" break ");
		break;
		case return_Leaf:
		printf(" return ");
		break;
		case type_int_Leaf:
		printf(" int ");
		break;
		case type_bool_Leaf:
		printf(" bool ");
		break;
		case type_string_Leaf:
		printf(" string ");
		break;
		case type_void_Leaf:
		printf(" void ");
		break;
		case syscall_readint:
		printf(" readint() ");
		break;
		case syscall_readline:
		printf(" readline() ");
		break;*/
	}
}
/*
void FindActualsofCall(struct Node *header, char *actual, int initSign)
{
	int i;
	static int position = 0;
	if (initSign == 1)position = 0;
	if (position >= 19) error("formals too much", NULL);
	if (header->astType != Node_struct) return ;
	if (header->astType == Node_Actuals)
	{
		actual[position] = '_';
		actual[position+2] = '\0';
		if (header->node[0]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		switch(header->node[0]->dataType)
		{	
			case DataType_int:
				actual[position+1] = 'i';
				break;
			case DataType_bool:
				actual[position+1] = 'b';
				break;
			case DataType_string:
				actual[position+1] = 's';
				break;
			case DataType_void:
				actual[position+1] = 'v';
				break;
		}
		position +=2;
	}
	printf("actuals:%d", header->node[0]->dataType);
	if (header->num == 2) FindActualsofCall(header->node[1], actual, 0);
}

void FindFormalsofFunction(struct Node *header, char *formals, int initSign)
{
	int i;
	static int position = 0;
	if (initSign == 1)position = 0;
	if (position >= 19) error("formals to much", NULL);
	if (header->astType != Node_struct) return ;
	if (header->astType == Node_Variable)
	{
		formals[position] = '_';
		formals[position+2] = '\0';
		switch(header->node[0]->dataType)
		{
			case DataType_int:
				formals[position+1] = 'i';
				break;
			case DataType_bool:
				formals[position+1] = 'b';
				break;
			case DataType_string:
				formals[position+1] = 's';
				break;
			case DataType_void:
				formals[position+1] = 'v';
				break;
		}
		position +=2;
	}
	for (i = 0; i < header->num; i++)
		FindFormalsofFunction(header->node[i], formals, 0);
}*/

void createTableFromASTtree(struct Node *header)
{
	int i;
	//char formals[21];	//最大支持10个参数
	if (header->astType != Node_struct) {return ;}
	if (header->nodeType == Node_Program) {
		header->symbolTableNode = createRoot();
		header->node[0]->symbolTableNode = header->symbolTableNode;
	}
	else if (header->nodeType == Node_EClassDef){
		if (insertSymbol(header->symbolTableNode->header, header->node[0]->name, Type_class, DataType_noDef, 0) == 0)
			error("identifier defined mutiple or header is null ", header->node[0]->name);
		header->node[0]->symbolTableNode = header->symbolTableNode;
		header->node[1]->symbolTableNode = header->symbolTableNode;
		header->node[2]->symbolTableNode = createTableNode(header->symbolTableNode);
		insertToClassTable(header->node[0]->name, header->node[2]->symbolTableNode);
	}
	else if (header->nodeType == Node_ClassDef){	//
		if (insertSymbol(header->symbolTableNode->header, header->node[0]->name, Type_class, DataType_noDef, 0) == 0)
			error("identifier defined mutiple or header is null ", header->node[0]->name);
		header->node[0]->symbolTableNode = header->symbolTableNode;
		header->node[1]->symbolTableNode = createTableNode(header->symbolTableNode);
		insertToClassTable(header->node[0]->name, header->node[1]->symbolTableNode);
	}
	else if (header->nodeType == Node_SFunctionDef){	//
		//FindFormalsofFunction(header->node[2], formals, 1);
		if (insertSymbol(header->symbolTableNode->header, header->node[1]->name, Type_staticFunction, DataType_noDef, 0) == 0)
			error("identifier defined mutiple or header is null ", header->node[1]->name);
		header->node[0]->symbolTableNode = header->symbolTableNode;
		header->node[1]->symbolTableNode = header->symbolTableNode;
		header->node[2]->symbolTableNode = header->node[3]->symbolTableNode = createTableNode(header->symbolTableNode);
	}
	else if (header->nodeType == Node_FunctionDef){
		//FindFormalsofFunction(header->node[2], formals, 1);
		if (insertSymbol(header->symbolTableNode->header, header->node[1]->name, Type_function, DataType_noDef, 0) == 0)
			error("identifier defined mutiple or header is null ", header->node[1]->name);
		header->node[0]->symbolTableNode = header->symbolTableNode;
		header->node[1]->symbolTableNode = header->symbolTableNode;
		header->node[2]->symbolTableNode = header->node[3]->symbolTableNode = createTableNode(header->symbolTableNode);
	}
	else if (header->nodeType == Node_Variable){	//
		header->node[1]->dataType = header->node[0]->dataType;
		if (insertSymbol(header->symbolTableNode->header, header->node[1]->name, Type_variable, header->node[0]->dataType, 0) == 0)
			error("identifier defined mutiple or header is null ", header->node[1]->name);
		header->node[0]->symbolTableNode = header->symbolTableNode;
		header->node[1]->symbolTableNode = header->symbolTableNode;
	}
	else if (header->nodeType == Node_StmtBlock){	//
		header->node[0]->symbolTableNode = createTableNode(header->symbolTableNode);
	}
	else {
		for (i = 0; i < header->num; i++)
			header->node[i]->symbolTableNode = header->symbolTableNode;
	}
	for (i = 0; i < header->num; i++) {
		createTableFromASTtree(header->node[i]);
	}
}

void updateTable(struct Node *header)
{
	//继承的处理
	int i;
	if (header->num == 0)return ;
	if (header->nodeType == Node_EClassDef){
		header->node[2]->symbolTableNode->parents = findInClassTable(header->node[1]->name);
	}
	for (i = 0; i < header->num; i++) {
		updateTable(header->node[i]);
	}
}

void Check(struct Node *header)
{
	SymbolCheck(header);
	TypeCheck(header);
}

void TypeCheck(struct Node *header)
{
	int i;
	if (header->num == 0) return;
	else if (header->nodeType == Node_Expr) {
		if (header->node[0]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		header->dataType = header->node[0]->dataType;
	}
	else if (header->nodeType == Node_add || header->nodeType == Node_sub || header->nodeType == Node_mul 
		|| header->nodeType == Node_div || header->nodeType == Node_mod)
	{
		if (header->node[0]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		if (header->node[1]->dataType == DataType_noDef)
			TypeCheck(header->node[1]);
		if (header->node[0]->dataType == DataType_int && header->node[1]->dataType == DataType_int)
			header->dataType = DataType_int;
		else 
			error("TypeCheck error", NULL);
	}
	else if (header->nodeType == Node_l || header->nodeType == Node_le || header->nodeType == Node_h 
		|| header->nodeType == Node_he || header->nodeType == Node_e || header->nodeType == Node_ne)
	{
		if (header->node[0]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		if (header->node[1]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		if (header->node[0]->dataType == DataType_int && header->node[1]->dataType == DataType_int)
			header->dataType = DataType_bool;
		else 
			error("TypeCheck error", NULL);
	}
	else if (header->nodeType == Node_and || header->nodeType == Node_or) 
	{
		if (header->node[0]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		if (header->node[1]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		if (header->node[0]->dataType == DataType_bool && header->node[1]->dataType == DataType_bool)
			header->dataType = DataType_bool;
		else 
			error("TypeCheck error", NULL);
	}
	else if (header->nodeType == Node_neg)
	{
		if (header->node[0]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		if (header->node[0]->dataType == DataType_int)
			header->dataType = DataType_int;
		else 
			error("TypeCheck error", NULL);
	}
	else if (header->nodeType == Node_not)
	{
		if (header->node[0]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		if (header->node[0]->dataType == DataType_bool)
			header->dataType = DataType_bool;
		else 
			error("TypeCheck error", NULL);
	}
	else if (header->nodeType == Node_assign)
	{
		if (header->node[0]->dataType == DataType_noDef)
			TypeCheck(header->node[0]);
		if (header->node[1]->dataType == DataType_noDef)
			TypeCheck(header->node[1]);
		//printf("%d %d\n", header->node[0]->dataType, header->node[1]->dataType);
		if (header->node[0]->dataType != header->node[1]->dataType)
			error("TypeCheck error", NULL);
	}
	else if (header->nodeType == Node_LValue)
	{
		if (header->node[header->num-1]->dataType == DataType_noDef)
			TypeCheck(header->node[header->num-1]);
		header->dataType = header->node[header->num-1]->dataType;
	}
	else
	for (i = 0; i < header->num; i++) {
		TypeCheck(header->node[i]);
	}
}

void SymbolCheck(struct Node *header)
{
	int i;
	struct SymbolNode *temp;
	if (header->num == 0)return ;
	if (header->nodeType == Node_ClassType || header->nodeType == Node_NewClass) {
		temp = findSymbolFromTree(header->symbolTableNode, header->node[0]->name);
		if (temp == NULL || temp->type != Type_class) error("class symbol check error", header->node[0]->name);
	}
	else if (header->nodeType == Node_Call) {
		temp = findSymbolFromTree(header->symbolTableNode, header->node[header->num-2]->name);
		if (temp == NULL || temp->type != Type_function) error("function symbol check error", header->node[header->num-2]->name);
	}
	else if (header->nodeType == Node_LValue){
		temp = findSymbolFromTree(header->symbolTableNode, header->node[header->num-1]->name);
		if (temp == NULL || temp->type != Type_variable) error("variable symbol check error", header->node[header->num-1]->name);
		header->node[header->num-1]->dataType = temp->dataType;
	}
	for (i = 0; i < header->num; i++) {
		SymbolCheck(header->node[i]);
	}
}

void printTest(ThreeAddCode *tac) {
	CodeLine *temp;
	temp = tac->head;
	while(temp != tac->tail)
	{
		printf("%s %s %s %s\n", temp->op, temp->place[0], temp->place[1], temp->place[2]);
		temp = temp->next;
	}
}

void genTAC(struct Node *header)
{
	int i;
	CodeLine *temp;
	//if (header->num == 0)return;
	if (header->nodeType == Node_SFunctionDef || header->nodeType == Node_FunctionDef) {
		header->tac = CreateTAC(header->node[1]->name, ":", NULL, NULL);
		
		if (header->node[3]->tac == NULL)
			genTAC(header->node[3]);
		header->tac = LinkTAC(header->tac, header->node[3]->tac);
	}
	else if (header->nodeType == Node_StmtBlock || header->nodeType == Node_Stmt || header->nodeType == Node_SimpleStmt || header->nodeType == Node_BoolExpr
		|| header->nodeType == Node_Expr) {
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		header->tac = header->node[0]->tac;
		strcpy(header->place, header->node[0]->place);
	}
	else if (header->nodeType == Node_Stmts || header->nodeType == Node_Exprs) {
		if (header->num == 1) {
			if (header->node[0]->tac == NULL)
				genTAC(header->node[0]);
			header->tac = header->node[0]->tac;
			strcpy(header->place, header->node[0]->place);
		}
		else if (header->num == 2) {
			if (header->node[0]->tac == NULL)
				genTAC(header->node[0]);
			if (header->node[1]->tac == NULL)
				genTAC(header->node[1]);
			header->tac = LinkTAC(header->node[0]->tac, header->node[1]->tac);
		}
	}
	else if (header->nodeType == Node_assign) {
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("assign", header->node[0]->place, header->node[1]->place, NULL));
	}
	else if (header->nodeType == Node_LValue) {
		if (header->num != 1)error("to do ..", NULL);
		strcpy(header->place, header->node[0]->place);
	}
	else if (header->nodeType == Node_IfStmt) {
		if (header->num == 2) {
			if (header->node[0]->tac == NULL)
				genTAC(header->node[0]);
			if (header->node[1]->tac == NULL)
				genTAC(header->node[1]);
			sprintf(truelists, "true%d", label);
			sprintf(nextlists, "next%d", label);
			label++;
			header->tac = LinkTAC(header->node[0]->tac, 
				LinkTAC(CreateTAC("if", header->node[0]->place, "goto", truelists), 
				LinkTAC(CreateTAC("goto", nextlists, NULL, NULL),
				LinkTAC(CreateTAC(truelists, ":", NULL, NULL),
				LinkTAC(header->node[1]->tac, CreateTAC(nextlists, ":", NULL, NULL))))));
		}
		else if (header->num == 3) {
			if (header->node[0]->tac == NULL)
				genTAC(header->node[0]);
			if (header->node[1]->tac == NULL)
				genTAC(header->node[1]);
			if (header->node[2]->tac == NULL)
				genTAC(header->node[2]);
			sprintf(truelists, "true%d", label);
			sprintf(falselists, "false%d", label);
			sprintf(nextlists, "next%d", label);
			label++;
			header->tac = LinkTAC(header->node[0]->tac, 
				LinkTAC(CreateTAC("if", header->node[0]->place, "goto", truelists), 
				LinkTAC(CreateTAC("goto", falselists, NULL, NULL),
				LinkTAC(CreateTAC(truelists, ":", NULL, NULL),
				LinkTAC(header->node[1]->tac, 
				LinkTAC(CreateTAC("goto", nextlists, NULL, NULL),
				LinkTAC(CreateTAC(falselists, ":", NULL, NULL),
				LinkTAC(header->node[2]->tac, 
				LinkTAC(CreateTAC("goto", nextlists, NULL, NULL), CreateTAC(nextlists, ":", NULL, NULL))))))))));
		}
	}
	else if (header->nodeType == Node_WhileStmt) {
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		sprintf(loop, "loop%d", label);
		sprintf(truelists, "true%d", label);
		sprintf(nextlists, "next%d", label);
		label++;
		header->tac = LinkTAC(CreateTAC(loop, ":", NULL, NULL),
			LinkTAC(header->node[0]->tac, 
			LinkTAC(CreateTAC("if", header->node[0]->place, "goto", truelists), 
			LinkTAC(CreateTAC("goto", nextlists, NULL, NULL),
			LinkTAC(CreateTAC(truelists, ":", NULL, NULL),
			LinkTAC(header->node[1]->tac, 
			LinkTAC(CreateTAC("goto", loop, NULL, NULL), CreateTAC(nextlists, ":", NULL, NULL))))))));
	}
	else if (header->nodeType == Node_ForStmt) {
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		if (header->node[2]->tac == NULL)
			genTAC(header->node[2]);
		if (header->node[3]->tac == NULL)
			genTAC(header->node[3]);
		sprintf(loop, "loop%d", label);
		sprintf(truelists, "true%d", label);
		sprintf(nextlists, "next%d", label);
		label++;
		header->tac = LinkTAC(header->node[0]->tac,
			LinkTAC(CreateTAC(loop, ":", NULL, NULL),
			LinkTAC(header->node[1]->tac, 
			LinkTAC(CreateTAC("if", header->node[1]->place, "goto", truelists), 
			LinkTAC(CreateTAC("goto", nextlists, NULL, NULL),
			LinkTAC(CreateTAC(truelists, ":", NULL, NULL),
			LinkTAC(header->node[2]->tac, 
			LinkTAC(header->node[3]->tac,
			LinkTAC(CreateTAC("goto", loop, NULL, NULL), CreateTAC(nextlists, ":", NULL, NULL))))))))));
	}
	else if (header->nodeType == Node_PrintStmt) {
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		header->tac = LinkTAC(header->node[0]->tac, CreateTAC("print", header->node[0]->place, NULL, NULL));
	}
	else if (header->nodeType == Node_ReturnStmt) {
		header->tac = CreateTAC("ret", NULL, NULL, NULL);
	}
	else if (header->nodeType == Node_add) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("add", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_sub) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("sub", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_mul) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("mul", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_div) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("div", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_mod) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("mod", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_l) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("l", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_le) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("le", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_h) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("h", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_he) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("he", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_e) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("e", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_ne) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("ne", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_and) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("and", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_or) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		if (header->node[1]->tac == NULL)
			genTAC(header->node[1]);
		header->tac = LinkTAC(LinkTAC(header->node[0]->tac, header->node[1]->tac), CreateTAC("or", header->place, header->node[0]->place, header->node[1]->place));
	}
	else if (header->nodeType == Node_neg) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		header->tac = LinkTAC(header->node[0]->tac, CreateTAC("neg", header->place, header->node[0]->place, NULL));
	}
	else if (header->nodeType == Node_not) {
		if (header->place[0] == '\0')
			CreatePlace(header->place);
		if (header->node[0]->tac == NULL)
			genTAC(header->node[0]);
		header->tac = LinkTAC(header->node[0]->tac, CreateTAC("not", header->place, header->node[0]->place, NULL));
	}
	else if (header->nodeType == Node_ReturnStmt)
	{
		header->tac = CreateTAC("ret", NULL, NULL, NULL);
	}
	else {
		for(i = 0; i < header->num; i++)
			genTAC(header->node[i]);
	}
}

void printTAC(struct Node *header) {
	int i;
	CodeLine *temp;
	if (header->nodeType == Node_SFunctionDef || header->nodeType == Node_FunctionDef)
	{
		temp = header->tac->head;
		while(temp != header->tac->tail)
		{
			printf("%s %s %s %s\n", temp->op, temp->place[0], temp->place[1], temp->place[2]);
			temp = temp->next;
		}
		printf("%s %s %s %s\n", temp->op, temp->place[0], temp->place[1], temp->place[2]);
	}
	else {
		for(i = 0; i < header->num; i++)
			printTAC(header->node[i]);
	}
}
