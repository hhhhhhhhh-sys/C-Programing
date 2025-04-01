#include<stdio.h>
int main()

{   int day;
      printf("Enter the number : ");
    scanf("%d",&day);
    switch (day)
    {
     case 1:
        printf("Day = Monday.\n",day);
        break;   
    case 2:
        printf("Day =Tuesday\n",day);
        break;
    case 3:
        printf("Day =Wednesday\n",day);
        break;
    case 4:
        printf("Day =Thrusday\n",day);
        break;
    case 5:
        printf("Day =Friday\n",day);
        break;
    case 6:
        printf("Day =Saturday\n",day);
        break;
    case 7:
        printf("Day =Sunday\n",day);
        break;
    default:
        printf("wrong",day);    
    
    }
    
    return 0;
}
//practical