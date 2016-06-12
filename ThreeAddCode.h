#ifndef _THREEADDCODE_H
#define _THREEADDCODE_H

typedef struct CodeLine {
	char op[10];
	char place[3][15];
	struct CodeLine *next;
}CodeLine;

typedef struct ThreeAddCode {
	struct CodeLine *head, *tail; 
}ThreeAddCode;


ThreeAddCode *LinkTAC(ThreeAddCode *code1, ThreeAddCode *code2);
ThreeAddCode *CreateTAC(char *newOp, char *place1, char *place2, char *place3);
void CreatePlace(char *place);




#endif