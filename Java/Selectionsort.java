import java.io.*;
import java.util.*;
public class Selectionsort
{
public static void main(String args[])
{
System.out.println("Enter number of elements in an array");
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int a[]=new int[n];
System.out.println("Enter elements in an array");
int min;
for(int i=0;i<n;i++)
{
a[i]=s.nextInt();
}
for(int i=0;i<n-1;i++)
{
min=i;
for(int j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
int temp=a[min];
a[min]=a[i];
a[i]=temp;
}
System.out.println("The sorted array in ascending order with Selection Sort technique");
for(int i=0;i<n;i++)
{
System.out.println(a[i]);
}
}
}