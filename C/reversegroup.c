void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
 int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i=i+k)
    {
        if((i+k)<n)
        {
        for(int j=0;j<k/2;j++)
        {
            swap(&arr[i+j],&arr[i+k-1-j]);
        }
        }
        else
        {
            for(int j=0;j<(n-i)/2;j++)
            {
            swap(&arr[i+j],&arr[n-j-1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;  
}