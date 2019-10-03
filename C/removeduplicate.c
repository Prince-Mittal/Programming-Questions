#include <stdio.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    int n1=j+1;
    printf("%d",n1);
    printf("\n");
    for(int j=0;j<n1;j++)
    {
        printf("%d ",arr[j]);
    }
    

    return 0;
}
