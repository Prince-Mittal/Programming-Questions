Ques:  Given an integer n, count and return the number of zeros that are present in the given integer using recursion.

Sol:

int countZeros(int n) { // Write your code here 
    if(n<=9)
        return 0;
    int a=countZeros(n/10); 
    if(n%10==0)
        return a+1;
    return a; 
    }
    