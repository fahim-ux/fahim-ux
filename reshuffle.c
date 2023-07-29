#include<stdio.h>
int main()
{
    int n,k=0,j=0;
    printf("Enter n:");
    int arr[n];
    int even[n];
    int odd[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element:-%d",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            
            odd[k]=arr[i];
            k++;
        }
    }
    /* to sort even */
    int counter=1;
    while(counter<j+1)
    {
        for(int p=0;p<j+1-counter;p++)
        {
            if(even[p]>even[p+1])
            {
                int t=even[p];
                even[p]=even[p+1];
                even[p+1]=t;
            }
        }
        counter++;
    }
    for(int i=0;i<=j;i++)
    {
        printf("%5d",even[i]);
    }
    printf("\n");


    /* to sort odd */
    int count=1;
    while(count<k+1)
    {
        for(int p=0;p<k+1-count;p++)
        {
            if(odd[p]>odd[p+1])
            {
                int t=odd[p];
                odd[p]=odd[p+1];
                odd[p+1]=t;
            }
        }
        count++;
    }
    for(int i=0;i<=k;i++)
    {
        printf("%5d",odd[i]);
    }



    /* for(int i=j+1,k=0;i<n;i++,k++)
    {
        even[i]=odd[k];
    }
    printf("The new array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%5d",even[i]);
    }
 */

}