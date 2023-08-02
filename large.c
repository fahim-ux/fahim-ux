#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,large=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    int *p;
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:-",i);
        scanf("%d",p[i]);

    }
    for(i=0;i<n;i++)
    {
        if(large<p[i])
        {
            large=p[i];
        }
    }
    printf("The largest element is: %d",large);
    delete(p);

}