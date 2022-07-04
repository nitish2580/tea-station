#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void createlinkedlist(int n);
void displaylist();
void insertatbegining(int);
void insertatend(int);
void insertatpos(int, int);

//*******************************************Main Function**************************************************

int main()
{
    int n, pos, data;
    printf("How many number you want");
    scanf("%d", &n);
    createlinkedlist(n);
    displaylist();
    // insertatbegining(13);
    // displaylist();
    // insertatend(21);
    // displaylist();
    printf("Enter the data ");
    scanf("%d", &data);
    printf("Enter the position");
    scanf("%d", &pos);
    insertatpos(data, pos);
    displaylist();

    return 0;
}

//**************************************Create Linked list*********************************

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

//*********************Insert at Begining*********************************
void insertatbegining(int newdata)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the new data at begining ");
    scanf("%d", &newdata);
    new_node->data = newdata;
    new_node->next = head;
    head = new_node;
}
//***************************Insert at end*******************************************
void insertatend(int data)
{

    struct node *temp, *new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == 0)
    {
        printf("Them memory can not be allocated");
    }
    else
    {
        printf("Enter the data at end ");
        scanf("%d", &data);
        new_node->data = data;
        new_node->next = 0;
        temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

//****************************Insert at pos*********************************

void insertatpos(int data, int pos)
{

    int i;
    struct node *temp, *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    if (new_node == NULL)
    {

        printf("unable to allocate memory");
    }
    else
    {
        new_node->data = data;
        new_node->next = NULL;

        temp = head;


        for (i = 2; i <= pos-1; i++)
        {
            temp = temp->next;
            printf("sariana");

            if (temp == NULL)
            {
                break;
            }
        }
        if (temp != NULL)
        {
            new_node->next = temp->next;
            temp->next = new_node;
            printf("The data is inserted\n");
        }
        else
        {
            printf("unvable to add datta\n");
        }
    }
}
//***************************print linked list

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
