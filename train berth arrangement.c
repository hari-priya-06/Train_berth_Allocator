#include<stdio.h>
int findTrainBerth(int);
int main()
{
    float n;
    printf("sleeper coach\n");
    printf("enter the berth number from 1 to 72: ");
    scanf("%f",&n);
    int k=n/1;
    if(n!=k)
    {
        printf("please enter an integer number");
        return 0;
    }
    findTrainBerth(n);
    return 0;
}
int findTrainBerth(int num)
{
    if(num>72 || num<=0)
    {
        printf("invalid seat number\n");
    }
    else
    {
        if(num%8==0)
        {
            printf("side upper berth\n");
        }
        else if(num%8==1)
        {
            printf("left lower berth\n");
        }
         else if(num%8==2)
        {
            printf("left middle berth\n");
        }
         else if(num%8==3)
        {
            printf("left upper berth\n");
        }
         else if(num%8==4)
        {
            printf("right upper berth\n");
        }
         else if(num%8==5)
        {
            printf("right middle berth\n");
        }
         else if(num%8==6)
        {
            printf("right lower berth\n");
        }
        else
        {
           printf("side lower\n");
        }
    }
    return 0;
}