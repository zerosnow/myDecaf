flex decaf.lex
bison -d decaf.y
gcc -o decaf  ASTtree.c ClassTable.c common.c decaf.tab.c lex.yy.c SymbolTable.c SymbolTree.c test.c ThreeAddCode.c
decaf.exe<b.c