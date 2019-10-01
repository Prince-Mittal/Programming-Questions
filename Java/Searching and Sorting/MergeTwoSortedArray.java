import java .util.*;
public class Solution {

	public static int[] merge(int arr1[], int arr2[]){
		
        int arr3[] = new int[arr1.length + arr2.length];
        System.arraycopy(arr1, 0, arr3, 0, arr1.length);
        System.arraycopy(arr2, 0, arr3, arr1.length, arr2.length);
        
		Arrays.sort(arr3);
        
        return arr3;
					

	}
	
}

public class Runner {
	
	static Scanner s = new Scanner(System.in);
	public static int[] takeInput(){
		
		int size = s.nextInt();
		int[] input = new int[size];
		for(int i = 0; i < size; i++){
			input[i] = s.nextInt();
		}
		return input;
	}
	
	public static void main(String[] args) {
		
		int[] arr1 = takeInput();
		int[] arr2 = takeInput();
		int ans[] = Solution.merge(arr1, arr2);
		for(int i = 0; i < ans.length; i++){
			System.out.print(ans[i] + " ");
		}
	}

}
