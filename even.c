#include<stdio.h>
int main()
{
int a;
 printf("Enter the no:");
 scanf("%d",&a);	
 switch(a%2==0) 
 {
 	case 1:
 	printf("Number entered is even");
 	break;
 	case 0:
    printf("Number entered is odd");
    break;
    return 0;
}
}
//practical