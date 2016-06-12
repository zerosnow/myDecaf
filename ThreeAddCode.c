#include "ThreeAddCode.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


ThreeAddCode *LinkTAC(ThreeAddCode *code1, ThreeAddCode *code2)
{
	if (code1 == NULL) return code2;
	if (code2 == NULL) return code1;
	code1->tail->next = code2->head;
	code1->tail = code2->tail;
	return code1;
}
ThreeAddCode *CreateTAC(char *newOp, char *place1, char *place2, char *place3)
{
	ThreeAddCode *temp;
	CodeLine *codeLine;
	temp = (ThreeAddCode *)malloc(sizeof(ThreeAddCode));
	codeLine = (CodeLine *)malloc(sizeof(CodeLine));
	strcpy(codeLine->op, newOp);
	if (place1 == NULL) codeLine->place[0][0] = '\0';
	else strcpy(codeLine->place[0], place1);
	if (place2 == NULL) codeLine->place[1][0] = '\0';
	else strcpy(codeLine->place[1], place2);
	if (place3 == NULL) codeLine->place[2][0] = '\0';
	else strcpy(codeLine->place[2], place3);
	codeLine->next = NULL;
	temp->head = codeLine;
	temp->tail = codeLine;
	return temp;
}

void CreatePlace(char *place)
{
	static int i = 0;
	sprintf(place, "t%d", i);
	i++;
}