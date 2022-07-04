#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int);
void dequeue();
void display();
void size();

int main()
{
    int data, choice;
    while (1)
    {
        printf("-------------------------------------------------\n");
        printf("           IMPLEMENTATION OF QUEUE                \n");
        printf("--------------------------------------------------\n");
        printf("1. Enqueue\n");
        printf("2. dequeue\n");
        printf("3. display\n");
        printf("4. exit\n");
        printf("5. size\n");
        printf("Enter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element ");
            scanf("%d", &data);
            enqueue(data);
            printf("data is enqued\n"); 
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit from the app\n");
            exit(0);
        case 5:
            size();
            break;
        default:
            printf("Enter the valid choice");
            break;
        }
    }

    return 0;
}
void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear = ((rear + 1) % N);
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("The Queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("The delete data is %d", queue[front]);
        front = (front + 1) % N;
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("The Queue is empty");
    }
    else
    {
        while (i != rear)
        {
            printf("%d\n", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", queue[rear]);
    }
}

void size()
{
    int i = front;
    int count = 0;
    if (front == -1 && rear == -1)
    {
        printf("The Queue is empty\n");
    }
    else
    {
        while (i != rear)
        {
            count++;
            i=(i+1)%N;
        }
        count++;
        printf("Size of queue is %d\n", count);
    }
}