#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define N 5
int stack[N];
int top=-1;
void push(int n);
void pop();
void display();
void stacklength();

int main(){
    // push(98);
    // push(8);
    // display();
    // stacklength();
    int choice, data;
    while(1){
        //*men8*************************
        printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("------------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("5. Display");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to push into stack");
            scanf("%d",&data);
            push(data);
            printf("Data is pushed");
            break;
        case 2:
            pop();
            // If stack is not empty
            // if (data != INT_MIN)
            //     printf("Data => %d\n", data);
            break;
        case 3:
            stacklength();
            break;
        case 5:
         display();
         break;
        case 4:
            exit(0);
        
        default:
        printf("Invalid choice");
            break;
        }
    }
    return 0;
}
void push(int n)
{
    if(top>N-1){
        printf("Stack overflow\n");
        return;
    }
    
        top++;
        stack[top]=n;
    
}
void pop(){
int item;
if(top<0){
    printf("Underflow");
}
else{
    item=stack[top];
    top--;
    printf("The data removed is %d\n",item);
}
}
void display(){
    for(int i=top; i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
void stacklength(void){
    int count=0;
    for (int i = top; i >= 0; i--)
    {
        count++;
    }
    printf("The length of stack is %d",count);
    
}