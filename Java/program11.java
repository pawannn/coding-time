/*WAP to enter string through command line argument that may contain numeric or alphanumeric.
 You have to sum out all numeric digit as well as create a string from remaining characters in 
 order to find your name can be created from that string or not.*/

 public class Main
{
	public static void main(String[] args) {
		String alphanum = "niharika123";
		String alpha = "";
		String nums = "1234567890";
		int sum = 0;
		String[] ch = new String[alphanum.length()];
		for (int i = 0; i < alphanum.length(); i++) {
            ch[i] = alphanum.substring(i,i+1);
        }
        for (int i = 0; i < ch.length; i++){
            if(nums.contains(ch[i])){
                sum += Integer.parseInt(ch[i]);  
            }
            else{
                alpha += ch[i];
            }
        }
        System.out.println("Sum of digits in the given string : " + sum);
        System.out.println("Alphabets in the given string : "+ alpha);
        String name = "niharika";
        for(int i = 0; i < name.length(); i++){
            if(alpha.contains(name.substring(i,i+1))){
                continue;
            }
            else{
                System.out.println("Your name " + name + " cannot be formed");
                return;
            }
                   
        }
        System.out.println("Your name " + name + " can be formed using the aplhabets");
	}
}
