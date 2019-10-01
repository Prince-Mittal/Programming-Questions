import java.io.*;
import java.util.*;
public class PrimeSeries
{
public static void main(String args[])
{
System.out.println("2");
for(int i=3;i<100;i++)
{
int flag=0;
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
}
}
if(flag==0)
{
System.out.println(i);
}
}
}
}