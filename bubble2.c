//desending order
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of elements: ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(int i=0;i<n;i++)
    printf("%d",ar[i]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
        if(ar[j]<ar[j+1])
        {
            int org=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=org;
        }
    }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d",ar[i]);
    return 0;

}