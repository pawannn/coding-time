//WAP to find number of ‘a’ in a string s=” alialiali” without using charAt() method.

import java.util.*; 
public class Main
{
	public static void main(String[] args) {
	    String s = "alialiali";
	    int count = 0;
	    for(int i=0; i < s.length(); i++){
	        if((s.substring(i,i+1)).equals("a")){
	            count += 1;
	        }
	    }
	    System.out.println(count);
	}
}

