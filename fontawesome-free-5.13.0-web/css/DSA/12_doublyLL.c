#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * head, *newnode;
void createdoubleLL(void);
void displaylist(void);
int main()
{
    createdoubleLL();
    displaylist();
    return 0;
}
void createdoubleLL(void)
{
    struct node  *temp;
    int data, choice;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &data);
        newnode->data = data;
        newnode->prev = 0;
        newnode->next = 0;
        if (head == 0)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Enter 1 for more number and 0 for end the loop\n");
        scanf("%d", &choice);
    }
}
// void displaylist(void){
//     struct node *temp;
//     temp=head;
//     while(temp!=0){
//     printf("%d\n",temp->data);
//     temp=temp->next;

//     }
// }
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
