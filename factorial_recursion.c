#include<stdio.h>
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int num;
    printf("Enter the number you want to enter");
    scanf("%d",&num);
    if(num<0){
        printf("Negative of factorial doesn't exist");
        }
    else{
        printf("Factorial of %d is %d",num,factorial(num));
        }
}