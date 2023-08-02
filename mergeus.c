#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n:\n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("For first array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:-",i);
        scanf("%d",&a[i]);
    }
    printf("For second array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:-",i);
        scanf("%d",&b[i]);
    }

    /* Merging Arrays */
    int al=sizeof(a)/sizeof(a[0]);
    int bl=sizeof(b)/sizeof(b[0]);

    int cl=al+bl;
    int c[cl];
    for(i=0;i<al;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<bl;i++)
    {
        c[al+i]=b[i];
    }
    printf("The merged unsorted arry is:\n");
    for(i=0;i<cl;i++)
    {
        printf("%5d",c[i]);
    }

}