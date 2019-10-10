QUES::

Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p

Sol::

// Change in the given string itself. So no need to return or print anything
int count_len(char input[])
{
    int len=0;
    for(int i=0;input[i]!='\0';i++)
        len++;
    return len;
}

void replacePi(char input[]) {
	// Write your code here
    //count=count-1;
    
    if(input[0]=='\0')
        return ;
     replacePi(input+1);
    if(input[0] =='p' && input[1]=='i')
    {
            int count=count_len(input);
                input[count+2]='\0';
        for(int j=count-1;j>1;j--)
            input[j+2]=input[j];
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    
   
}


