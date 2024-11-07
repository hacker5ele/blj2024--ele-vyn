//
// Created by Eleonora on 07.11.2024.
//
#include <stdio.h>
#include "linkedlist.h"

#include <stdlib.h>

void printList(TNode *p_head) {
    TNode *p_cursor = p_head;
    while (p_cursor != NULL) {  // Loop until reaching the end of the list
        printf("%d\n", p_cursor->data);  // Print the data of the current node
        p_cursor = p_cursor->next;       // Move to the next node
    }
}

TNode *createNode(int data) {
    TNode *p_head = malloc(sizeof(TNode));
    p_head->data = data;
    p_head->next = NULL;

    return p_head;
}