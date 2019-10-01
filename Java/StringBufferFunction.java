/*
getchars() left only.
*/
import java.io.*;
import java.util.*;
import java.lang.*;
public class StringBufferFunction
{
public static void main(String args[])
{
StringBuffer B= new StringBuffer("Hi This is Me");
System.out.println(B);
System.out.println(B.length());
System.out.println(B.capacity());
B.ensureCapacity(30);
System.out.println(B.capacity());
B.setLength(6);
System.out.println(B.length());
char ch=B.charAt(5);
System.out.println(ch);
B.setCharAt(4,'n');
System.out.println(B);
String str=B.append("sljfsl").append(40).append(12.90).toString();
System.out.println(str);
B.insert(4,"like");
System.out.println(B);
B.reverse();
System.out.println(B);
B.deleteCharAt(2);
System.out.println(B);
}
}