#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element:-%d",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the position:");
    scanf("%d",&pos);
    int counter=1;
    while (counter<n-pos)
    {
        for(int i=pos;i<n-i;i++)
        {
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    
}