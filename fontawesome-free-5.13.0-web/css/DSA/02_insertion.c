#include <stdio.h>
int main()
{
    int a[39], size, num, pos,item;
    printf("Enter the arraz size");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("**********************\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    //Insertion at certain position
    printf("*******************************************\n");
    printf("Enter the numer you want to insert");
    scanf("%d", &num);
    printf("Enter the position");
    scanf("%d",&pos);
    if (pos<=0||pos>size)
    {
        printf("invalid position");
    }
    
else{
    for (int i = size - 1; i >= pos-1; i--)
    {
        a[i + 1] = a[i];
    }
}
    a[pos-1] = num;
    size++;
    printf("New updated array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
a[2]=98;
    return 0;
}