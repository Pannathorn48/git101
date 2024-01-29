#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;

int main()
{
    node *head = NULL;
    node *newnode = NULL;
    node *tmp = NULL;

    newnode = (node *)malloc(sizeof(node));
    newnode->data = 1;
    newnode->next = head;
    head = newnode;

    newnode = (node *)malloc(sizeof(node));
    newnode->data = 2;
    newnode->next = head;
    head = newnode;

    newnode = (node *)malloc(sizeof(node));
    newnode->data = 3;
    newnode->next = head;
    head = newnode;

    for (tmp = head; tmp != NULL; tmp = tmp->next)
    {
        printf("%d ", tmp->data);
    }
}