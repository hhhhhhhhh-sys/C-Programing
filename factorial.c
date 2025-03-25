#include<stdio.h>
int factorial(int n){
    if (n==1||n==0)
    {
        
        return 1;
    }
    
    return n*factorial(n-1);
    
}
int main(){
    int n ;
    printf("Enter the u want the factorial: ");
    scanf("%d",&n);
    int a=factorial(n);
    printf("The factorial is: %d",a);
}