//WAP to print the matrix rotated by 90 degrees
import java.io.*;
import java.util.*;
class MatrixRotation
{
	public static void main(String[] args) 
	{
		Scanner s=new Scanner(System.in);
		int[][]a=new int[4][4];

		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				a[i][j]=s.nextInt();
			}
		}

		printmat(a);
		rotatemat(a);	
	}
	public static void printmat(int a[][])
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				System.out.print(a[i][j]+" ");
			}
			System.out.println();
		}

	}
	public static void rotatemat(int a[][])
	{
		for(int j=0;j<4;j++)
		{
			for(int i=3;i>=0;i--)
			{
				System.out.print(a[i][j]+ " ");
			}
			System.out.println();
		}
	}
}