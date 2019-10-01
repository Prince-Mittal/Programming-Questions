import java.util.*;
public class Solution {

	
	public static int[] arrange(int n){
	
        int k=0;
        //Initializing an array.
        int arr[]=new int[n];

        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                //Storing the even values from the start of the Array.
                arr[k]=i;
                //Initializing the index by 1.
                k++;
            }
        }
        for(int i=n;i>=1;i--)
        {
            if(i%2==0)
            {
                //Storing the odd values from the end of the Array.
                arr[k]=i;
                
                //Initializing the index by 1.
                k++;
            }
        }
        //Returning the Array Arranged.
        return arr;
    }
	
}