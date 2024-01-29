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

    for (int i = 0; i < 10; i++)
    {
        newnode = (node *)malloc(sizeof(node));
        newnode->data = i;
        newnode->next = head;
        head = newnode;
    }

    for (tmp = head; tmp != NULL; tmp = tmp->next)
    {
        printf("%d ", tmp->data, tmp);
    }
}