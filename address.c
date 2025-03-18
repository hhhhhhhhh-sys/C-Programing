#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int c=0;
    puts("enter your address\n");
    gets(a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]==' ')
        c++;

    }
    printf("the total no space is %d\n",c);
    printf("the total no of words is %d",c+1);
return 0;


}