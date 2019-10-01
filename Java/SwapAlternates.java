
public class Solution {

	
	public static void swapAlternate(int[] input){
		
		for(int i=0;i<(input.length)-1;i++)
        {
            int temp=input[i];
            input[i]=input[i+1];
            input[i+1]=temp;
            i++;
        }
        

	}
	
}
