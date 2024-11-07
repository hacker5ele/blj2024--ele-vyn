#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>



int main(void)
{
   TNode *p_head = (TNode*)malloc(sizeof(TNode));
   p_head->data = 3;
   p_head->next = NULL;
   TNode *p_new = (TNode*)malloc(sizeof(TNode));
   p_new->data = 7;
   p_new->next = NULL;
}
