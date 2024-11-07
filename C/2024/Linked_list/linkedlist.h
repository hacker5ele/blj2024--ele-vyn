//
// Created by Eleonora on 07.11.2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct Node {
    int data;
    struct Node *next;
}TNode;

void printList(TNode *p_head);
TNode *createNode(int data);

#endif //LINKEDLIST_H
