Ques::

Check if a given String S is palindrome or not (using recursion). Return true or false.
Input Format :
String S
Output Format :
true or false
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false

Sol::

bool helper(char s[],int start,int end)
{
  if((end-start+1==0) || (end-start+1==1))
    return true;
  if(s[start]!=s[end])
    return false;
  else{
  bool ans=helper(s,start+1,end-1);
  return ans;
  }
}


bool checkPalindrome(char input[]) {
    // Write your code here
    int len=0;
  for(int i=0;input[i]!='\0';i++)
    len++;
  return helper(input,0,len-1);
}
