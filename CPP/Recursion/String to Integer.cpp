QUES::

String to Integer
Send Feedback
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string (string, Eg. "1234")
Output format :
Corresponding integer (int, Eg. 1234)
Sample Input 1 :
1231
Sample Output 1:
1231
Sample Input 2 :
12567
Sample Output 2 :
12567


SOL::


int cal(char input[],int len)
{
    int small =input[len]-48,res=0;
    if(len <0)
        return 0;
    
    res = cal(input , len-1)*10;
    return res+small;
}   



int stringToNumber(char input[]) {
    // Write your code here
    
    //calculate length of char array
    int len = 0,i=0;
    for(i = 0 ; input[i] != '\0' ; i++)
        len++;
    return cal(input,len-1);
}
