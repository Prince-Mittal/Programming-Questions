#include<stdio.h>

#define m 4
#define n 4

/*void transpose(int arr[m][n])
{
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	 for(int i=0;i<m;i++)
        {
                for(int j=0;j<n;j++)
                {
                        printf("%d ",arr[i][j]);
                }
                printf("\n");
        }
}

void mirrorImage(int arr[m][n])
{
	for(int i=0;i<m;i++)
	{
		int start=0,end=n-1;
		while(start<end)
		{
			int temp=arr[i][start];
			arr[i][start]=arr[i][end];
			arr[i][end]=temp;
			start++;
			end--;
		}
	}
	 for(int i=0;i<m;i++)
        {
                for(int j=0;j<n;j++)
                {
                        printf("%d ",arr[i][j]);
                }
                printf("\n");
        }
}

void rotate_90_degree_clockwise(int arr[m][n])
{
	transpose(arr);
	mirrorImage(arr);
}*/

void rotate_90_degree_clockwise(int arr[m][n])
{
	for(int i=0;i<m/2;i++)
	{
		for(int j=i;j<n-i-1;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[m-j-1][i];
			arr[m-j-1][i]=arr[m-i-1][n-j-1];
			arr[m-i-1][n-j-1]=arr[j][n-i-1];
			arr[j][n-i-1]=temp;
		}
	}

}

int main()
{
	int arr[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	rotate_90_degree_clockwise(arr);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}	
}

