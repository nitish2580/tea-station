#include<stdio.h>
int main(){
    int a[2][3];
    printf("Enter the number");
    for( int i=0; i<3;i++)
    {
        for(int j=0; j<2;j++){
            scanf("%d",&a[j][i]);
        }
    }
    printf("**********************************************\n");
     for( int i=0; i<3;i++)
    {
        for(int j=0; j<2;j++){
            printf("%d",a[j][i]);
        }
    }

    return 0;
}