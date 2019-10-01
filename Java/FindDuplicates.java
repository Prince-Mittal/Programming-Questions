import java.util.*;
public class Solution{	
	
	public static int duplicate(int[] arr){
        Arrays.sort(arr);
        int duplicate = 0;
        int flag = 0;
        for(int i = 1; i < (arr.length)-1; i++)
        {
            if(arr[i] == arr[i-1] || arr[i]==arr[i+1])
                flag =i;
        }
        duplicate = arr[flag];
        return duplicate;
	}
}

public class Runner {
	
	public static int[] takeInput() {
		Scanner s = new Scanner(System.in);
		int size = s.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s.nextInt();
		}
		return arr;
	}
	
	public static void main(String[] args) {
		int[] arr = takeInput();
		System.out.print(Solution.duplicate(arr));
	}
}