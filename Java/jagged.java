import java.io.*;
import java.util.*;
public class jagged
{
public static void main(String args[])
{
int n,m;
Scanner s=new Scanner(System.in);
n=s.nextInt();
m=s.nextInt();
int a[][]=new int[n][];
for(int i=0;i<n;i++)
{
a[i]=new int[i+1];
}
int count=0;

for(int i=0;i<a.length;i++)
{
for(int j=0;j<a[i].length;j++)
{
a[i][0]=i+1;
}
}
for(int i=0;i<a.length;i++)
{
for(int j=1;j<a[i].length;j++)
{
a[i][j]=a[i][j-1]+n-j;
}
}
for(int i=0;i<a.length;i++)
{
for(int j=0;j<a[i].length;j++)
{
System.out.print(a[i][j]+" ");
}
System.out.println();
}
}
}