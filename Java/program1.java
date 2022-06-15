// WAP in Java to print the sum of following series: xn = x^1 + x^2 + x^3 + x^4 + …… + x^n without using math.pow function.
import java.lang.Math;
import java.util.*;  
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);  
		System.out.println("Enter X : ");
		int x= sc.nextInt();  
		System.out.println("Enter Limit ");  
        int n= sc.nextInt();  
        int i = 1, sum = 0;
        while(i <= n){
            int pow = 1;
            for(int j = 1; j <= i; j++){
                pow = pow * (int)x;
            }
            sum = sum + pow;
            i++;
        }
        System.out.println("sum of series : "+sum); 
    } 
 }
