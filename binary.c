#include<stdio.h>
#define MAX 3
int main()
{
    int rem=0,a;
    int data[MAX];
    for(int i=0;i<MAX;i++)
    {
        printf("Enter decimal number %d:",i);
        scanf("%d",&data[i]);
    }

    for(int i=0;i<MAX;i++)
    {
        int bin=0,place=1,num;
        num=data[i];
            while(num!=0)
        {
            rem=num%2;
            num=num/2;
            bin=bin+(rem*place);
            place=place*10;

        }
        printf("The binary of %d is: %d\n ",data[i],bin);
    }
   
}