//WAP in Java to print the sum of following series:x^1/y^2 + x^3/y^4 + x^5/y^6 + …. Upto n terms. (without using math.pow() function)

import java.lang.Math;
import java.util.*;  
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);  
		System.out.println("Enter X : ");
		int x= sc.nextInt();
		System.out.println("Enter Y : ");
		int y= sc.nextInt();
		System.out.println("Enter Limit : ");  
        int n= sc.nextInt();  
        int i = 1, count = 1,sum = 0, div;
        while(i <= n){
            int pow1 = 1, pow2 = 1;
            for(int j = 1; j <= i; j++ ){
                pow1 = pow1 * x;
                pow2 = pow2 * y;
            }
            div = pow1/pow2;
            sum = sum + div;
            count += 2;
            i += 1;
        }
        System.out.println("sum of series : "+sum);
	}
}
