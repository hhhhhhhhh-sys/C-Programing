#include<stdio.h>
int main()
{   int n1,n2,i,j,prime;
    //printf("Enter the range: ");
    //scanf("%d %d",&n1,&n2);
    printf("Prime numbers between 1 to 20 are \n");
    for (int i = 1; i <=20; i++)
    {   prime=1;
        for (int j = 2; j <i; j++)
        {   
            if (i%j==0)
            {   prime=0;
                break;
            }
            
            
        }
        if (prime)
            {
                printf("%d\t",i);
            }
        
    }
    
    
    return 0;
}
