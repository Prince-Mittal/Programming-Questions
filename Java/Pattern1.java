import java.io.*;
import java.util.*;
public class Pattern1
{
public static void main(String args[])
{
int n,m;
Scanner s=new Scanner(System.in);
n=s.nextInt();
m=s.nextInt();


for(int i=0;i<n;i++)
{
for(int j=m-1;j>m-j-1;j--)
{
System.out.print("*");
}
System.out.println();
}
}
}