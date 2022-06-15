/*WAP to check longest sub sequence of a same character in an initialized string? 
Sample I/P: [aaaabppppp]             O/P: p=5
Sample I/P: [aabbcc]                     O/P: a=2*/

import java.util.Arrays;
public class Main   
{  
     public static void main(String[] args) {  
        String str = "aaabbaappp";  
        int[] freq = new int[str.length()];  
        int i, j;
        char string[] = str.toCharArray();  
          
        for(i = 0; i <str.length(); i++) {  
            freq[i] = 1;  
            for(j = i+1; j <str.length(); j++) {  
                if(string[i] == string[j]) {  
                    freq[i]++;  
                    string[j] = '0';  
                }  
            }  
        }    
        Arrays.sort(freq);
        System.out.println(freq[freq.length - 1]);
    }  
}  
