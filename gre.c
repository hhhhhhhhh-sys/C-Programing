#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first numbers:");
    scanf("%d",&a);
     printf("Enter the second numbers:");
    scanf("%d",&b);
    switch (a>b)
    {
    case 1:
        printf("%d is the greatest. ",a);
        break;
    case 0:
    printf("%d is the greatest.",b);
    break;
    
    default:
        printf("%d is the smallest. ",a,b);
        break;
    }
    return 0;
}
//practical