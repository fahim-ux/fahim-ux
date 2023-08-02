/* Ascending sort */
/* #include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:-",i);
        scanf("%d",&arr[i]);
    }
    int counter=1;
    while(counter<n)
    {
        for(j=0;j<n-counter;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
        counter++;
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
}
 */


/* Descending sort */
/* #include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:-",i);
        scanf("%d",&arr[i]);
    }
    int counter=1;
    while(counter<n)
    {
        for(j=0;j<n-counter;j++)
        {
            if(arr[j]<arr[j+1])
            {
                t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
        counter++;
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
}
 */