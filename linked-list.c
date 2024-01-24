#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

struct Node
{
    int value;
    int position;
    struct Node *nextNode;
};

void traverseLinkedList(struct Node *node)
{
    printf("Value of node %d: %d\n", node->position, node->value);
    if (node->nextNode)
    {
        traverseLinkedList(node->nextNode);
    }
}

void freeLinkedList(struct Node *listHead)
{
    struct Node *tempNode;

    while (listHead)
    {
        tempNode = listHead;
        listHead = listHead->nextNode;
        free(tempNode);
    }
}

int main()
{

    struct Node *headNode = (struct Node *)malloc(sizeof(struct Node));

    headNode->value = 43;
    headNode->position = 1;
    headNode->nextNode = NULL;

    struct Node *nextNode = (struct Node *)malloc(sizeof(struct Node));

    headNode->nextNode = nextNode;
    nextNode->position = 2;
    nextNode->value = 37;

    traverseLinkedList(headNode);
    freeLinkedList(headNode);

    return 0;
}