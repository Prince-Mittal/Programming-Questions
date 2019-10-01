import java.util.Scanner;

public class SecondLargest{	
	
	public static int secondLargestElement(int[] arr) {
		
        int temp = 0, max = 0;
        for(int i = 0; i<arr.length; i++)
        {
            if(arr[i]>max)
                max = arr[i]; 
        }
        for(int i = 0; i<arr.length; i++)
        {
            if(arr[i]>temp && arr[i] != max)
                temp = arr[i];
        }
        
        return temp;

	}
}

public class Main {
	
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
		System.out.print(SecondLargest.secondLargestElement(arr));
	}
}