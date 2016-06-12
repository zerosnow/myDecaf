#ifndef _ASTTREE_H
#define _ASTTREE_H

#include "SymbolTable.h"

typedef enum {Leaf_constant, Leaf_variable, Leaf_type, Leaf_other, Node_struct}ASTtype;
typedef enum {Leaf_this, Leaf_break, Leaf_return, Leaf_Blank, Leaf_NULL, syscall_readint, syscall_readline}LeafType;
typedef enum {Node_Program, Node_ClassDef, Node_EClassDef, Node_ClassDefs, Node_VariableDef, Node_Variable, Node_Identifier, Node_Type, Node_Formals, Node_FunctionDef,
	Node_SFunctionDef, Node_Field, Node_StmtBlock, Node_Stmts, Node_Stmt, Node_SimpleStmt, Node_LValue, Node_Call, Node_Actuals, Node_ForStmt, Node_WhileStmt, Node_IfStmt,
	Node_ReturnStmt, Node_PrintStmt, Node_Exprs, Node_BoolExpr, Node_Expr, Node_Constant, Node_ClassType, Node_Array, Node_NewClass, Node_NewArray, Node_instanceof,
	Node_assign, Node_add, Node_sub, Node_mul, Node_div, Node_mod, Node_neg, Node_l, Node_le, Node_h, Node_he, Node_e, Node_ne, Node_and, Node_or, Node_not}NodeType;

typedef struct Node{
	ASTtype astType;
	NodeType nodeType;
	DataType dataType;
	LeafType leafType;
	struct ThreeAddCode *tac;
	char place[15];
	char *name;		//名称
	int intValue;
	int boolValue;
	char *stringValue;
	struct SymbolTableNode *symbolTableNode;	//对应的符号表结点
	int num;			//子节点个数
	struct Node *node[1];
}Node;

struct Node *mkNode(NodeType type, int num, ...);
struct Node *mkLeaf_const_int(int value);
struct Node *mkLeaf_const_bool(int value);
struct Node *mkLeaf_const_string(char *value);
struct Node *mkLeaf_variable(char *value);
struct Node *mkLeaf_type(DataType dataType);
struct Node *mkLeaf_other(LeafType type);

void Check(struct Node *header);
void TypeCheck(struct Node *header);
void SymbolCheck(struct Node *header);
void FindFormalsofFunction(struct Node *header, char *formals, int initSign);
void createTableFromASTtree(struct Node *header);
void updateTable(struct Node *header);
void genTAC(struct Node *header);
void printAST(struct Node *head);
extern unsigned int strlen(char *s);
extern char *strcpy(char* dest, const char *src);
extern char *strcat(char *destin, char *source); 

#endif