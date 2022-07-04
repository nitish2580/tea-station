#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top,*newnode;
void push(int);
void display(void);
int main(){
    push(56);
    push(57);
    push(58);
    display();
}
void push(int x){
    struct node *top;
    top=0;
    if(top==0){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;

    }
    else{
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = top;
        top = newnode;
    }
}
void pop(){
    if(top==0){
        printf("EMPTY");
    }
    else{
    struct node*temp;
    temp=top;
    top=top->next;
    free(temp);
    }
}

void display(void){
    struct node *temp;
    temp=top;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}