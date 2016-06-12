#ifndef _CLASSTABLE_H
#define _CLASSTABLE_H

//与类有关的名字-符号表的表，用来处理继承关系
typedef struct ClassTable {
	char *name;
	struct SymbolTableNode *node;
	struct ClassTable *next;
}ClassTable;

void insertToClassTable(char *newName, struct SymbolTableNode *newNode);
struct SymbolTableNode *findInClassTable(char *newName);
void clearClassTable();
extern unsigned int strlen(char *s);
extern char *strcpy(char* dest, const char *src); 
extern int strcmp(const char *s1,const char *s2);

#endif