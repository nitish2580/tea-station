#include<stdio.h>
int main(){
    int a[39],size,num,pos;
    printf("Enter the arraz size");
    scanf("%d",&size);
    for (int i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    printf("*******************************************\n");
    printf("Enter the numer you want to insert");
    scanf("%d",&num);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",a[i]);
    }
    //Insertion fro begining
    for (int  i = size-1; i >= 0; i--)
    {
        a[i+1]=a[i];
        
    }
    a[0]=num;
    size++;
    printf("New updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}