//WAP to find the average of second minimum and second highest number from the array?

import java.util.Arrays;
public class Main
{
	public static void main(String[] args) {
		int[] arr = {8,3,6,1,4,2};
		Arrays.sort(arr);
		System.out.println("The second minimum element in array is : "+arr[1]);
		System.out.println("The second maximum element in array is : "+arr[arr.length - 2]);
	}
}
