import java.util.Scanner;
public class Solution{	
	
	public static void intersections(int[] input1, int[] input2){
		for(int i=0;i<input1.length;i++)
        {
            for(int j=0;j<input2.length;j++)
            { 
                if(input1[i]==input2[j])
                {
                    input2[j]=-11;
                    System.out.println(input1[i]);
                    break;
                }
            }
        }
	}
}

public class Runner {
	static Scanner s = new Scanner(System.in);
	public static int[] takeInput() {
		int size = s.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s.nextInt();
		}
		return arr;
	}
	
	public static void main(String[] args) {
		int[] arr1 = takeInput();
		int[] arr2 = takeInput();
		Solution.intersections(arr1, arr2);
	}
}