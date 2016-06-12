%{
	#include "ASTTree.h"
	#include <stdio.h>
	int yylex(void);
	void yyerror(char *);
	void test(struct Node *header);
	struct Node *header;
%}

%union {
int intValue;
char *stringValue;
struct Node *node;
};


%type<node> Program
%type<node> ClassDef
%type<node> ClassDefs
%type<node> VariableDef
%type<node> Variable
%type<node> Identifier
%type<node> Type
%type<node> Formals
%type<node> FunctionDef
%type<node> Field
%type<node> StmtBlock
%type<node> Stmts
%type<node> Stmt
%type<node> SimpleStmt
%type<node> LValue
%type<node> Call
%type<node> Actuals
%type<node> ForStmt
%type<node> WhileStmt
%type<node> IfStmt
%type<node> ReturnStmt
%type<node> BreakStmt
%type<node> PrintStmt
%type<node> Exprs
%type<node> BoolExpr
%type<node> Expr
%type<node> Constant

%token MYBOOL MYBREAK MYCLASS MYELSE MYEXTENDS MYFOR MYIF MYINT MYNEW MYNULL MYRETURN MYSTRING MYTHIS MYVOID MYWHILE MYSTATIC MYPRINT MYREADINTEGER MYREADLINE MYINSTANCEOF MYFALSE MYTRUE MYSTRING2 MYIDENTIFIER MYSPACE MYINTEGER MYDEX MYHET MYLET MYEQU MYUEQU MYAND MYOR
%left MYOR 
%left MYAND
%left MYEQU MYUEQU
%left '<' '>' MYHET MYLET
%left '+' '-'
%left '*' '/' '%'
%right '!'
%%
Program:
ClassDefs  {$$ = header = mkNode(Node_Program, 1, $1); }
;

ClassDefs:
ClassDef ';' {$$ = mkNode(Node_ClassDefs, 1, $1);}
| ClassDefs ClassDef ';' {$$ = mkNode(Node_ClassDefs, 2, $1, $2);}
;

ClassDef:
MYCLASS Identifier MYEXTENDS Identifier '{' Field '}'  {$$ = mkNode(Node_EClassDef, 3, $2, $4, $6);}
|MYCLASS Identifier '{' Field '}'  {$$ = mkNode(Node_ClassDef, 2, $2, $4);}
;

Field:
FunctionDef {$$ = mkNode(Node_Field, 1, $1);}
| VariableDef {$$ = mkNode(Node_Field, 1, $1);;}
|Field FunctionDef {$$ = mkNode(Node_Field, 2, $1, $2);}
|Field VariableDef {$$ = mkNode(Node_Field, 2, $1, $2);}
;

FunctionDef:
MYSTATIC Type Identifier '(' Formals ')' StmtBlock {$$ = mkNode(Node_SFunctionDef, 4, $2, $3, $5, $7);}
|Type Identifier '(' Formals ')' StmtBlock {$$ = mkNode(Node_FunctionDef, 4, $1, $2, $4, $6);}
;

VariableDef:
Variable ';' {$$ = mkNode(Node_VariableDef, 1, $1);}
;

Variable:
Type Identifier {$$ = mkNode(Node_Variable, 2, $1, $2);}
;

Identifier:
MYIDENTIFIER {$$ = mkLeaf_variable(yylval.stringValue);}

Type:
MYINT {$$ = mkLeaf_type(DataType_int);}
|MYBOOL  {$$ = mkLeaf_type(DataType_bool);}
|MYSTRING {$$ = mkLeaf_type(DataType_string);}
|MYVOID {$$ = mkLeaf_type(DataType_void);}
|MYCLASS Identifier {$$ = mkNode(Node_ClassType, 1, $2);}
|Type '[' ']' {$$ = mkNode(Node_Array, 1, $1);}
;

Formals:
Variable {$$ = mkNode(Node_Formals, 1, $1);}
|Formals ',' Variable {$$ = mkNode(Node_Formals, 2, $1, $3);}
| {$$ = mkLeaf_other(Leaf_Blank);}
;

StmtBlock:
'{' Stmts '}' {$$ = mkNode(Node_StmtBlock, 1, $2);}
|'{' '}' {$$ = mkLeaf_other(Leaf_Blank);}
;
Stmts:
Stmt {$$ = mkNode(Node_Stmts, 1, $1);}
|Stmt Stmts {$$ = mkNode(Node_Stmts, 2, $1, $2);}
;
Stmt:
VariableDef {$$ = mkNode(Node_Stmt, 1, $1);}
|SimpleStmt ';' {$$ = mkNode(Node_Stmt, 1, $1);}
|IfStmt {$$ = mkNode(Node_Stmt, 1, $1);}
|WhileStmt {$$ = mkNode(Node_Stmt, 1, $1);}
|ForStmt {$$ = mkNode(Node_Stmt, 1, $1);}
|BreakStmt ';' {$$ = mkNode(Node_Stmt, 1, $1);}
|ReturnStmt ';' {$$ = mkNode(Node_Stmt, 1, $1);}
|PrintStmt ';' {$$ = mkNode(Node_Stmt, 1, $1);}
|StmtBlock {$$ = mkNode(Node_Stmt, 1, $1);}
;
SimpleStmt:
LValue '=' Expr {$$ = mkNode(Node_assign, 2, $1, $3);}
|Call {$$ = mkNode(Node_SimpleStmt, 1, $1);}
;
LValue:
Expr '.' Identifier {$$ = mkNode(Node_LValue, 2, $1, $3);} 
|Identifier  {$$ = mkNode(Node_LValue, 1, $1);} 
|Expr '[' Expr ']' {$$ = mkNode(Node_LValue, 2, $1, $3);}
;
Call:
Expr '.' Identifier '(' Actuals ')' {$$ = mkNode(Node_Call, 3, $1, $3, $5);}
|Identifier '(' Actuals ')' {$$ = mkNode(Node_Call, 2, $1, $3);}
;
Actuals:
Expr {$$ = mkNode(Node_Actuals, 1, $1);}
|Expr ',' Actuals {$$ = mkNode(Node_Actuals, 2, $1, $3);}
| {$$ = mkLeaf_other(Leaf_Blank);}
;
ForStmt:
MYFOR '(' SimpleStmt ';' BoolExpr ';' SimpleStmt ')' StmtBlock {$$ = mkNode(Node_ForStmt, 4, $3, $5, $7, $9);}
;
WhileStmt:
MYWHILE '(' BoolExpr ')' StmtBlock {$$ = mkNode(Node_WhileStmt, 2, $3, $5);}
;
IfStmt:
MYIF '(' BoolExpr ')' StmtBlock {$$ = mkNode(Node_IfStmt, 2, $3, $5);}
|IfStmt MYELSE StmtBlock {$$ = mkNode(Node_IfStmt, 2, $1, $3);}
;
ReturnStmt:
MYRETURN {$$ = mkNode(Node_ReturnStmt, 0);}
|MYRETURN Expr {$$ = mkNode(Node_ReturnStmt, 1, $2);}
;
BreakStmt:
MYBREAK {$$ = mkLeaf_other(Leaf_break);}
;
PrintStmt:
MYPRINT '(' Exprs ')' {$$ = mkNode(Node_PrintStmt, 1, $3);}
;
Exprs:
Expr {$$ = mkNode(Node_Exprs, 1, $1);}
|Expr ',' Exprs {$$ = mkNode(Node_Exprs, 2, $1, $3);}
| {$$ = mkLeaf_other(Leaf_Blank);}
;
BoolExpr:
Expr {$$ = mkNode(Node_BoolExpr, 1, $1);}
;
Expr:
Constant {$$ = mkNode(Node_Expr, 1, $1);}
|LValue {$$ = mkNode(Node_Expr, 1, $1);}
|MYTHIS {$$ = mkLeaf_other(Leaf_this);}
|Call {$$ = mkNode(Node_Expr, 1, $1);}
|'(' Expr ')' {$$ = mkNode(Node_Expr, 1, $2);}
|Expr '+' Expr {$$ = mkNode(Node_add, 2, $1, $3);}
|Expr '-' Expr {$$ = mkNode(Node_sub, 2, $1, $3);}
|Expr '*' Expr {$$ = mkNode(Node_mul, 2, $1, $3);}
|Expr '/' Expr {$$ = mkNode(Node_div, 2, $1, $3);}
|Expr '%' Expr {$$ = mkNode(Node_mod, 2, $1, $3);}
|'-' Expr {$$ = mkNode(Node_neg, 1, $2);}
|Expr '<' Expr {$$ = mkNode(Node_l, 2, $1, $3);}
|Expr MYLET Expr {$$ = mkNode(Node_le, 2, $1, $3);}
|Expr '>' Expr {$$ = mkNode(Node_h, 2, $1, $3);}
|Expr MYHET Expr {$$ = mkNode(Node_he, 2, $1, $3);}
|Expr MYEQU Expr {$$ = mkNode(Node_e, 2, $1, $3);}
|Expr MYUEQU Expr {$$ = mkNode(Node_ne, 2, $1, $3);}
|Expr MYAND Expr {$$ = mkNode(Node_and, 2, $1, $3);}
|Expr MYOR Expr {$$ = mkNode(Node_or, 2, $1, $3);}
|'!' Expr {$$ = mkNode(Node_not, 1, $2);}
|MYREADINTEGER '(' ')' {$$ = mkLeaf_other(syscall_readint);}
|MYREADLINE '(' ')' {$$ = mkLeaf_other(syscall_readline);}
|MYNEW Identifier '(' ')' {$$ = mkNode(Node_NewClass, 1, $2);}
|MYNEW Type '[' Expr ']' {$$ = mkNode(Node_NewArray, 2, $2, $4);}
|MYINSTANCEOF '(' Expr ',' Identifier ')' {$$ = mkNode(Node_instanceof, 2, $3, $5);}
;
Constant:
MYINTEGER {$$ = mkLeaf_const_int(yylval.intValue);}
|MYDEX {$$ = mkLeaf_const_int(yylval.intValue);}
|MYTRUE {$$ = mkLeaf_const_bool(1);}
|MYFALSE {$$ = mkLeaf_const_bool(0);}
|MYSTRING2 {$$ = mkLeaf_const_string(yylval.stringValue);}
|MYNULL {$$ = mkLeaf_other(Leaf_NULL);}
;
%%

void yyerror(char *s)
{
	printf("%s\n",s);
}

int main(void)
{
	yyparse();
	createTableFromASTtree(header);
	updateTable(header);
	Check(header);
	genTAC(header);
	printTAC(header);
	test(header);
	getchar();
	return 0;
}








