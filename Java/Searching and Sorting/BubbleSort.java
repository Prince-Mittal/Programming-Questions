import java.util.Scanner;

public class BubbleSort {	
	//arr is the input array you have to sort
	public static void bubbleSort(int[] arr){
		
        int temp = 0;
        
        for(int i = 0; i < arr.length-1; i++)
        {
            for(int j = 0; j < arr.length-1; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    temp = 0;
                }
            }
        }
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

	public static void print(int[] arr) {
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]+" ");
		}
	}
	
	public static void main(String[] args) {
		int[] arr = takeInput();
		BubbleSort.bubbleSort(arr);
		print(arr);
	}
}
