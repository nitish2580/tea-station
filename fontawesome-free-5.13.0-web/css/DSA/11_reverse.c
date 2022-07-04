#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void createlinkedlist(int n);
void displaylist(void);
void Reverse(void);
//*******************************Main Function***********************************

int main(){
    int n;
    printf("Enter the number of node");
    scanf("%d",&n);
    createlinkedlist(n);
    displaylist();
    Reverse();
    displaylist();
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
//************************************Reverse****************************
void Reverse(void){
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
    printf("Reversing of Linked list is completed\n");
}
