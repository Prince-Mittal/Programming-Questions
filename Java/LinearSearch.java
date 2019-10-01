import java.util.*;
public class LinearSearch{	
	
	public static int linearSearch(int[] arr, int num){
        int c=-1;
		for(int i=0;i<arr.length;i++)
        {
            // Checking the element at i(th) index. 
            if(num==arr[i])
            {
                c=i;
                break;
             }
        }
        //Returning the index where the number is found in the array.
        return c;
	}
}