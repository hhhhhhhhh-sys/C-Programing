#include<stdio.h>
/*int main()
{
    float length,breadth,area;

    printf("Enter the length: ");
    scanf("%f",&length);

    printf("Enter the breadth: ");
    scanf("%f",&breadth);

    area=length*breadth;
    printf("The area of rectangle is ""%f",area);
    return 0;
}*/
/*int main()
{
    float celsius,farenheit;

    printf("Enter the temperature in farenheit : ");
    scanf("%f",&farenheit);
    celsius=(farenheit-32)*5/9;
    printf("The temperature in farenheit is""%f",celsius);
    return 0;
}*/
/*int main()
{
    float radius,area;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    float pi=3.14159265358;
    area=pi*radius*radius;
    printf("The area of circle is ""%f",area);
    return 0;
}*/
/*int main()
{
    int n,count=0,i;
    printf("Enter any number :");
    scanf("%d",n);
    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)

        {
            count++;
        }
        
    }


    
    if (count==2)
    printf("Prime number");
    else
    printf("Not prime number");
    
    return 0;
}*/



// computer lab work 
/*int main()
{  printf("#####\n#\n####\n#\n#\n");
    return 0;
    
}*/
/*void main()
{
    int x,y,z;
    float a,b,c;
    x=10;
    y=4;
    a=4.0;
    b=2.0;
    z=x-y;
    c=a-b;
    printf("Sum of int=%d\nsum of float=%f",z,c);
    
}*/


/*int main() {
    int int1, int2;
    float float1, float2;

    // Read input
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);

    // Calculate and print sum and difference for int variables
    printf("%d %d\n", int1 + int2, int1 - int2);

    // Calculate and print sum and difference for float variables
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);

    return 0;
}*/
/*int main()

{   float a, b,Total;
    printf("The Height of first person is: ");
    scanf("%f",&a);
    printf("The Height of second person is: ");
    scanf("%f",&b);
    Total =a+b;
    printf("The total height is""%.1f metres",Total);

    return 0;
}*/
/*int main()
{   printf("#####");
    printf("\n  #\n  #\n  #\n  #\n  #\n");
    
    printf("#####\n\n");
    printf("#####\n#\n####\n#\n#\n");
    return 0;
}*/



/*    int main()
{   int x,y,z;
    printf("Enter the number");
    scanf("%d%d",&x,&y);
    z=x-y;
    printf("result is %d",z);
    
    return 0;
}*/
/*int main()
{   int x,y,z,mul;
    printf("Enter the first number: ");
    scanf("%d ",&x);

    printf("Enter the second number: ");
    scanf("%d ",&y);

    printf("Enter the third number: ");
    scanf("%d ",&z);

    mul=x*y*z;
    printf("Multiplication of three numbers is: %d\n",mul);
     
    return 0;
}*/
/*int main()
{   int a=10,b=5,sub;
    sub=a-b;
    printf("Subtraction of two numbers is: %d ",sub);
    
    return 0;
}*/
/*,*/
/*int main()
{   int a=2,b=4;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping is: %d",a);
    return 0;
}*/
/*int main()
{   float celsius,farenheit;
    printf("Enter the temperture in farenheit: ");
    scanf("%f",&farenheit);
    celsius=(farenheit-32)*5/9;
    printf("Temperature in farenheit is %f",celsius);
    
    return 0;
}*/
/*int main()
{   int Jyo_position=5, Rebecca_position=12,c;
    printf("Initial postions\n");
    printf("Jyo's position : square%d",Jyo_position);
    printf("\nRebecca's position:square%d",Rebecca_position);

    Jyo_position=Rebecca_position;
    Rebecca_position=c;
    c=Jyo_position;

    printf("\nAfter swapping\n");
    printf("\nJyo's position:square%d", Jyo_position);
    printf("\nRebecca's position: square%d", Rebecca_position);
    

    
    return 0;
}*/
 /*int main() {
    // Initial positions of players
    int jyoPosition = 5;
    int rebeccaPosition = 12;

    // Display initial positions
    printf("Initial Positions:\n");
    printf("Jyo's position: Square %d\n", jyoPosition);
    printf("Rebecca's position: Square %d\n", rebeccaPosition);

    // Swapping positions using a temporary variable
    int temp;
    temp = jyoPosition;
    jyoPosition = rebeccaPosition;
    rebeccaPosition = temp;

    // Display swapped positions
    printf("\nAfter Swapping Positions:\n");
    printf("Jyo's position: Square %d\n", jyoPosition);
    printf("Rebecca's position: Square %d\n", rebeccaPosition);

    return 0;
}*/


/*int main()
{   
    char ch;
    char s[20];
    char sen[100];
    scanf("%c",&ch);
    char s[max];
    scanf("%s",&s);
    char sen[max];
    scanf("%[^\n]*c",&sen);
    printf("%c,%s,%s",ch,s,sen);


    
    return 0;
}*/


/*
int main() {
    char ch;
    char s[20];
    char sen[100];

    
    scanf(" %c", &ch);

    
    scanf(" %[^\n]", s);

    
    scanf(" %[^\n]", sen);

    
    printf("%c", ch);

    
    printf("%s", s);

    
    printf("%s", sen);

    return 0;
}*/
int main()
{   int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
    {
            printf("A is greater=%d",a);
    }
        else{
            printf("C is greater=%d",c);
    }
    }
    else{
        printf("b is greater=%d",b);
    }
    
    return 0;
}








