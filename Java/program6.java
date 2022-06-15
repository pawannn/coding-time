//WAP in Java to initialize a string in order to find that character which frequency is 2nd most in that string.

public class Main
{
	public static void main(String[] args) {
		String str = "aabbca";  
		int secondmax = 0, max = 0;
		System.out.println("The entered string is "+str);
        char str1[] = str.toCharArray();   
        for(int i =0; i < str1.length; i++){
            int count = 0;
            for(int j=0; j < str1.length; j ++ ){
                if(i == j){
                    continue;
                }
                else{
                    if(str1[i] == str1[j]){
                        count += 1;
                    }
                }
            }
            if(count > max){
                max = count;
            }
        }
        for(int i =0; i < str1.length; i++){
            int count = 0;
            for(int j=0; j < str1.length; j ++ ){
                if(i == j){
                    continue;
                }
                else{
                    if(str1[i] == str1[j]){
                        count += 1;
                    }
                }
            }
            if(count < max && count > secondmax){
                secondmax = i;
            }
        }
        System.out.println(str1[secondmax]);  
    }
}
