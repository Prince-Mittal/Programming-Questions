import java.util.Scanner;
public class Solution{	

	public static void tripletSum(int[] input, int x){
		 int sum=0;
        for(int i=0;i<input.length;i++)
        {
            for(int j=i+1;j<input.length;j++)
            {
                if(input[i]>input[j])
                {
                    int temp=input[i];
                    input[i]=input[j];
                    input[j]=temp;
                }
            }
        }
        for(int i=0;i<input.length;i++)
        {
            for(int j=i+1;j<input.length;j++)
            {
                for(int l=j+1;l<input.length;l++)
                {
                    sum=input[i]+input[j]+input[l];
                    if(sum==x)
                        System.out.println(input[i]+" "+input[j]+" "+input[l]);
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
		int[] input = takeInput();
		int x = s.nextInt();
		Solution.tripletSum(input, x);
	}
}