#include<stdio.h>

#define m 4
#define n 4

void interchangeDiagonals(int arr[m][n]) 
{ 
    for(int i=0;i<m;i++) 
    {
	    if(i!=m/2)
	    {
		   int temp=arr[i][i];
		   arr[i][i]=arr[i][n-i-1];
		   arr[i][n-i-1]=temp;
	    }
    } 
} 
  

int main() 
{
	int arr[m][n]; 
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
    
	interchangeDiagonals(arr);
   	for(int i=0;i<m;i++)
    	{ 
    		for(int j=0;j<n;j++) 
            		printf("%d ",arr[i][j]);
    		printf("\n"); 
    	} 
    return 0; 
} 
