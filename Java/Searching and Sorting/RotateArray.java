import java.util.Scanner;

public class ArrayRotate {	

	public static void rotate(int[] arr, int d) {
		int temp=0;
        for(int i=0;i<d;i++)
        {
            for(int j=0;j<arr.length-1;j++)
            {
        
                
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                                
            }
        }

	}
}

public class Main {
	static Scanner s = new Scanner(System.in);
	public static int[] takeInput() {
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
		int index = s.nextInt();
		ArrayRotate.rotate(arr, index);
		print(arr);
	}
}