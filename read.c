#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,i;
    printf("Enter N:");
    scanf("%d",&N);
        struct Point
    {
        int x;
        int y;
    };
    struct Point *ptr;
    ptr=(struct Point *)malloc(N*sizeof(struct Point));
    if(ptr==NULL)
    {
        printf("Memory allocation Fail.");
        exit;
    }
    for(i=0;i<N;i++)
    {
        printf("Enter the first coordibate:\n");
        printf("Enter x and y:");
        scanf("%d%d",&(ptr[i].x),&(ptr[i].y));
    }
    for(i=0;i<N;i++)
    {
        printf("%5d%5d\n",ptr[i].x,ptr[i].y);
    }
    /* calculating distance */
    int distance[N];
    for(i=0;i<N;i++)
    {
        distance[i]=sqrt((((ptr[i].x)*(ptr[i].x))+((ptr[i].y)*(ptr[i].y))));
    }

    /* Finding least distance */
    int min=distance[0];
    for(i=0;i<N;i++)
    {
        if(min>distance[i])
        {
            int temp=min;
            min=distance[i];
            distance[i]=min;
        }
    }
}