#include <stdio.h>
int main()
{
    int a[39], size, pos;
    printf("Enter the arraz size");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("*******************************************\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    //deletion
    // printf("Enter the position");
    // scanf("%d", &pos);

    printf("*******************************************\n");

    for (int i = 0; i < size - 1; i++)
    {
        a[i] = a[i + 1];
        }
    
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}