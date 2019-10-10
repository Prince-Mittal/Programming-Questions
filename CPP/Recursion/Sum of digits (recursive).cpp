Ques::

Write a recursive function that returns the sum of the digits of a given integer.
Sample Input :
12345
Sample Output :
15


Sol::

int sumOfDigits(int n) {
    // Write your code here
    if(n/10 == 0)
        return n;
    int ans=sumOfDigits(n/10);
    return ans+n%10;
}


