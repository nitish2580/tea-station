#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int  main()
{
    struct node *head, *new_node, *temp;
    head = 0;
    int choice;
    printf("Hello world\n");
    while (choice)
    {
        // printf("laura behanchod\n");
        
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data");
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
        printf("are you want to insert new data (0/1)");
        scanf("%d", &choice);
    }
temp=head;
while (temp!=0)
{
    printf("%d\n",temp->data);
    temp=temp->next;
}

    return 0;
}