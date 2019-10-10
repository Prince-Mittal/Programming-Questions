QUES::

Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format :
Array elements in increasing order (separated by space)
Constraints :
1 <= n <= 1000
Sample Input:
6 
2 6 8 5 4 3
Sample Output:
2 3 4 5 6 8


SOL::

int partition(int input[], int si, int ei)
{
    int i, count = 0, temp, j;
    
    for(i = si + 1; i <= ei; i++)
    {
        if(input[i] <= input[si])
            count++;
    }
    
    temp = input[si + count];
    input[si + count] = input[si];
    input[si] = temp;
    
    i = si;
    j = ei;
    while(i<j)
    {
    if(input[i] <= input[si + count])
        i++;
    else if(input[j] > input[si + count])
        j--;
    
    else{
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    } 
    return (si + count);
    
}

void quick_Sort(int input[], int si, int ei)
{
    if(si >= ei)
        return;
    int c;
    
    c=partition(input, si, ei);
    
    quick_Sort(input, si, c - 1);
    quick_Sort(input, c + 1, ei);
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    int si = 0, ei = size - 1;
    quick_Sort(input, si, ei);
  
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


