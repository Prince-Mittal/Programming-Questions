import java.util.Scanner;

public class Main {
	static Scanner s1 = new Scanner(System.in);
		
	public static int[] takeInput() {
		int size = s1.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s1.nextInt();
		}
		return arr;
	}
	
	public static void main(String[] args) {
		int[] arr = takeInput();
		int num = s1.nextInt();
		System.out.print(BinarySearch.binarySearch(arr, num));
	}
}
public class BinarySearch{	
	//arr is the given sorted array in which you need to find num
	public static int binarySearch(int[] arr, int num){
		int start = 0, end = arr.length-1;
        int mid = 0;
        for(int i = start; i <= end; i++)
        {
            mid = (start + end)/2;
            if(num == arr[mid])
                break;
            
            else if(num < arr[mid])
                end = mid-1;
            else
                start = mid+1;
               
        }
        if(start>end)
            return -1;
        else
            return mid;
	}
}