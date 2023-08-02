#include<stdio.h>
int main()
{
    int n,i,pos,el;
    printf("Enter n:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:-",i);
        scanf("%d",&a[i]);
    }
    printf("Enter pos and new element:");
    scanf("%d %d",&pos,&el);
    pos=pos-1;
    n=n+1;
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=el;
    printf("The new array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
}