#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void createlinkedlist(int n);
void displaylist(void);
void deletefrombegining(void);
void deletefromend(void);
void deletefrompos(int);
void deleteatpos2(int);
void getlength(void);
void Reverse(void);

    //*******************Main function***************************
    int main()
{
    int n,pos;
    printf("Enter the number you want ");
    scanf("%d", &n);
    createlinkedlist(n);
    displaylist();
    // deletefrombegining();
    // displaylist();
    // deletefromend();
    // displaylist();
    // deletefrompos(2);
    printf("\nEnter the position where you want to delete \n");
    scanf("%d",&pos);
    deleteatpos2(pos);
    displaylist();
    getlength();

    return 0;
}
//***************************Create linked list*******************
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
    printf("\ndata is inserted in node\n");
}
//**********************Display list***********************************
void displaylist()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("Data is printed\n");
}
//************************************Deletion from begining********************
void deletefrombegining(void)
{
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
}

//**************************************Deletion from end***************
void deletefromend(void)
{
    struct node *temp, *prev;
    temp = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prev->next = NULL;
    }
    free(temp);
}
//*******************************************Delete
void deletefrompos(int n)
{
    struct node *temp, *prev;
    int i;
    if (head == NULL)
    {
        printf("List is already empty");
    }
    else
    {
        temp = head;
        prev = head;
        for (i = 2; i <= n; i++)
        {
            prev = temp;
            temp = temp->next;
            if (temp == NULL)
            {
                break;
            }
        }
        if (temp != NULL)
        {
            if (temp == head)
            {
                head = head->next;
            }
            prev->next = temp->next;
            temp->next = NULL;
            free(temp);
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
}
//*********************delete at middle*******************************
void deleteatpos2(int n)
{
    struct node *temp, *prev;
    temp = head;
    prev = NULL;
    int i=1;
    if (head == 0)
    {
        printf("List is already empty");
    }
    else
    {
        while (i <= n-1)
        {
            prev = temp;
            temp = temp->next;
            if (temp == NULL)
            {
                break;
            }
            i++;
        }
        if (n==1)
        {
            deletefrombegining();
        }
        
        else if (temp != NULL)
        {
            if (temp == head)
            {
                head = head->next;
            }
            else
            {
                prev->next = temp->next;
                // temp->next=NULL;
                free(temp);
                printf("\nDeltion opertation is completed\n");
            }
        }
        else{
            printf("Invalid position unable to delete.");
        }
    }
}
//**************************Get Length*************************************
void getlength(void)
{
    struct node *temp;
    int count=0;
    temp=head;
    while(temp!=0){
        count++;
        temp=temp->next;
    }
    printf("\nlenth of Linked List is %d\n",count);
}
//************************************Reverse****************************
void Reverse(void)
{
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
    printf("Reversing of Linked list is completed\n");
}
