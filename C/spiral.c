#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    int a=0,b=n-1,c=n-1,d=0;
    //int count=1;
    
    while(a<=c && d<=b)
    {
    for(int i=a;i<=b;i++)
    {
       printf("%d ",arr[a][i]);
    }
    a++;
    for(int i=a;i<=b;i++)
    {
        printf("%d ",arr[i][b]);
    }
    b--;
    for(int i=b;i>=d;i--)
    {
        printf("%d ",arr[c][i]);
    }
    c--;
    for(int i=c;i>d;i--)
    {
        printf("%d ",arr[i][d]);
    }
    d++;
    }

    return 0;
}
