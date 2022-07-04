#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void displaylist();
void insertitem(int data);

int main()
{
    struct node *new_node, *head, *temp;
    head = 0;
    int choice;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("enter the data you want to enter ");
        scanf("%d", &new_node->data);
        new_node->next = 0;
        if (head == 0)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        printf("Enter your your choice 0 to stop the loop, 1 to enter the data(0/1) ");
        scanf("%d", &choice);
    }
    // display();
    temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the new data");
        scanf("%d", &new_node->data);
        new_node->next = head;
        head = new_node;
    

        temp = head;
        while (temp != 0)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }

        return 0;
    }
    //  void display(void){
    //      struct node *temp,*head;
    // temp = head;
    // while (temp != 0)
    // {
    //     printf("%d\n", temp->data);
    //     temp = temp->next;
    // }
    //}
    // void insertitem(int data){
    //     struct node *new_node,*head;

    // }