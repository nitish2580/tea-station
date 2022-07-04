#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void createlinkedlist(int n);
void displaylist();
void insertNodeAtMiddle(int, int);
//***********************Main***************
int main(){
    int n, pos, data;
    printf("How many number you want");
    scanf("%d", &n);
    createlinkedlist(n);
    displaylist();
    printf("Enter the data ");
    scanf("%d", &data);
    printf("Enter the position");
    scanf("%d", &pos);
    insertNodeAtMiddle(data, pos);
    displaylist();
    return 0;
}
void createlinkedlist(int n)
{
    struct node *new_node, *temp;
    int data;

    head = (struct node *)malloc(sizeof(struct node));
    if (head == 0)
    {
        printf("Memory can not be allocated");
        exit(0);
    }

    printf("Enter the data in node 1 ");
    scanf("%d", &data);
    head->data = data; //link data with head
    head->next = NULL; // link the address of next node;
    temp = head;
    for (int i = 2; i <= n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        if (new_node == 0)
        {
            printf("Memory not be allocated");
            break;
        }
        else
        {
            printf("Enter the data in node %d ", i);
            scanf("%d", &data);
            new_node->data = data;
            new_node->next = NULL;

            temp->next = new_node;
            temp = new_node;
        }
    }
}
void displaylist()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void insertNodeAtMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link data part
        newNode->next = NULL;

        temp = head;

        /* 
         * Traverse to the n-1 position 
         */
        for (i = 2; i <= position - 1; i++)
        {
            temp = temp->next;

            if (temp == NULL)
                break;
        }

        if (temp != NULL)
        {
            /* Link address part of new node */
            newNode->next = temp->next;

            /* Link address part of n-1 node */
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}