#include <stdio.h>
/*int main() {
    printf("hello");
    return 0;
}*/
/*int main()
{   int p,r,t,i;
    printf("Enter the Principal value: ");
    scanf("%d",&p);
    printf("Enter the rate value: ");
    scanf("%d",&r);
    printf("Enter the time : ");
    scanf("%d",&t);
    i=p*r*t*0.01;
    printf("Simple interest is: %d",i);
    return 0;
}*/
int main() {
    int num1, num2, num3; 

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    int largest = num1;

    
    if (num2 > largest) {
        largest = num2;
    }
//do using nested if else
    
    if (num3 > largest) {
        largest = num3;
    }

    
    printf("The largest number is %d\n", largest);

    return 0;
}