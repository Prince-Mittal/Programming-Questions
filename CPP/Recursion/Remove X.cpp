QUES::

Given a string, compute recursively a new string where all 'x' chars have been removed.
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:

SOL::

void removeX(char input[]) {
    // Write your code here
    int i=1;
    if(input[0]=='\0')
        return;
    
    if(input[0] !='x')
        removeX(input+1);
    else{
        for(i=1;input[i]!='\0';i++)
            input[i-1]=input[i];
        input[i-1]=input[i];
        removeX(input);
    }
}
