#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n:\n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:-",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:-",i);
        scanf("%d",&b[i]);
    }
    /* Sorting in Ascending order */
    int counter=1;
    while(counter<n)
    {
        for(i=0;i<n-i;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        counter++;
    }
    int count=1;
    while(count<n)
    {
        for(i=0;i<n-i;i++)
        {
            if(b[i]>b[i+1])
            {
                int temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
        count++;
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