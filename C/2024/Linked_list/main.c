#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}TNode;

void printList(TNode *p_head) {
    TNode *p_cursor = p_head;
    while (p_cursor != NULL) {  // Loop until reaching the end of the list
        printf("%d\n", p_cursor->data);  // Print the data of the current node
        p_cursor = p_cursor->next;       // Move to the next node
    }
}

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



    printf("%d\n", p_head->data);
    printf("%d\n", p_new->data);
    printf("%d\n", p_new2->data);
    printf("%d\n", p_new3->data);
    printf("%d\n", p_new3->next);
    printf("%d\n", p_head->next->next->next->data);

    return 0;
}
