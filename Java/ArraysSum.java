import java.util.*;
public class Solution {

	public static int sum(int[] input){
        int sum=0;
		int count = input.length;
        
        //Adding every Element of the Array to the variable Sum.
        for(int i=0;i<count;i++)
            sum+=input[i];
        
        //Returning the value of sum
        return sum;
	}
	
}