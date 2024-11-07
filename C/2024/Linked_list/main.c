#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"




int main(void) {

    TNode *p_head = (TNode*)malloc(sizeof(TNode));
    p_head->data = 3;
    p_head->next = NULL;
    TNode *p_new = (TNode*)malloc(sizeof(TNode));
    p_new->data = 7;
    p_new->next = NULL;
    TNode *p_new2 = (TNode*)malloc(sizeof(TNode));
    p_new2->data = 5;
    p_new2->next = NULL;
    TNode *p_new3 = (TNode*)malloc(sizeof(TNode));
    p_new3->data = 14;
    p_new3->next = NULL;

    p_head->next = p_new;
    p_new->next = p_new2;
    p_new2->next = p_new3;

    printList(p_head);

    TNode *demo = createNode(56);


    printf("%d\n", p_head->data);
    printf("%d\n", p_new->data);
    printf("%d\n", p_new2->data);
    printf("%d\n", p_new3->data);
    printf("%d\n", p_new3->next);
    printf("%d\n", p_head->next->next->next->data);

    return 0;
}
