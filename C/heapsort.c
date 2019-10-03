#include <stdio.h>
int a[]={9,8,7,6,4,5,3,1};
    int size=8;
    int n=8;
void swap(int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void sink(int i)
{
    if(i>=size)return ;
    int max=i;
    int l=i*2;
    int r=(i*2)+1;
    if(l<size && a[l]>a[max])max=l;
    if(r<size && a[r]>a[max])max=r;
    if(i!=max)
    {
        swap(i,max);
        sink(max);
    }
}
void heapify()
{
    int i=n/2;
    for(;i>=0;i--)
    {
        sink(i);
    }
}
void sort()
{
    heapify();
    //printf
    int i=0;
    for(;i<n;i++)
    {
        swap(0,size-1);
        size--;
        sink(0);
    }
    for(i=0;i<size;i++)
    {
    printf("%d ",a[i]);
    }
}
void printresult()
{
    for(int i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}
int main()
{
    
    sort();
    printresult();
    
    return 0;
}
