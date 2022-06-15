//WAP in Java to initialize two string and find  common characters and different Characters of these string.

public class Main
{
	public static void main(String[] args) {
		String s1 = "abbca";
		String s2 = "caabc";
		String s3 = "";
		for(int i = 0; i < s1.length(); i++){
		    for(int j = 0; j < s2.length(); j++){
		        if(s1.charAt(i) == s2.charAt(j)){
		            String x = s1.substring(i,i+1);
		            if(!s3.contains(x)){
		                s3 += s1.charAt(i);
		            }
		        }
		    }
		}
		System.out.println("The common characters in both the string are : "+s3);
		
	}
}
