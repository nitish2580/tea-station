#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * head, *newnode, *last;
void createdoubleLL(int);
void displaylist(void);
void displaylistfromfirst(void);
void displaylistfromend(void);

    int main()
{
    int n, choice;

    // head = NULL;
    // last = NULL;

    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    createdoubleLL(n); // Create list of n nodes

    printf("\nPress 1 to display list from First");
    printf("\nPress 2 to display list from End : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        displaylistfromfirst();
    }
    else if (choice == 2)
    {
        displaylistfromend();
    }
    return 0;
}
void createdoubleLL(int n)
{
    int data;
    if (n > 0)
    {
        head = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data in node 1 ");
        scanf("%d", &data);
        head->data = data;
        head->prev = 0;
        head->next = 0;
        last = head;

        for (int i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if(newnode!=NULL){
            printf("Enter the data in node %d ", i);
            scanf("%d", &data);
            newnode->data = data;
            newnode->next = NULL;
            newnode->prev = last;

            last->next = newnode;
            last = newnode;
            }
            else
            {
                printf("Unable to allocate memory.");
                break;
            }
        }
        printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
    else{
        printf("Unable to allocate memory");
    }
}
//*****************Display from First***************************
void displaylistfromfirst(void){
    struct node *temp;
    int n=1;
    if (head==NULL)
    {
        printf("List is already empty");
    }
    else{
        temp = head;
        while(temp!=0){
            printf("\nDATA of node %d = %d\n",n,temp->data);
            temp=temp->next;
            n++;
        }
    }
    

}
//********************************Display from end *******************************

void displaylistfromend(void)
{
    struct node *temp;
    int n = 1;
    if (last == NULL)
    {
        printf("List is already empty");
    }
    else
    {
        temp = last;
        while (temp != 0)
        {
            printf("\nDATA of node %d = %d\n", n, temp->data);
            temp = temp->prev;
            n++;
        }
    }
}