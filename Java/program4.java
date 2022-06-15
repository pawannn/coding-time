/*WAP in java to simulate condition to generate Wi-Fi password. Take input as Name, City, Age and Gender.
Constraints:
Length of name and city should be greater or equal to 3.
Age can`t be 18.
Output Constraints:
If Gender=F and Age<18
Password: 1st 3 char of name + sum of digit of age + last 3 char of city
Else If gender=F and Age>18
Password: last 3 char of Name + Diff of digit of age(Positive) + 1st 3 char of City.
Else
Password: 1st char of name + 1st char of city + 2nd char of name + 2nd char of city …
Append this to length of max string(name or city) and then concatenate with Age to get password.*/


import java.util.*; 
import java.lang.Math;
public class Main
{
	public static void main(String[] args) {
	    String password = "";
		Scanner sc= new Scanner(System.in);
        System.out.print("Enter Name: ");  
        String name= sc.nextLine();
        System.out.print("Enter City: ");  
        String city= sc.nextLine();
        System.out.print("Enter Gender: ");  
        String gender= sc.nextLine();
        System.out.print("Enter age: "); 
        int age= sc.nextInt();
        if(name.length() >= 3 && city.length() >= 3 && age != 18){
            if(gender.equals("F")){
                if(age < 18){
                    int sum = 0;
                    while(age > 0){
                        int rem = age%10;
                        sum = sum + rem;
                        age = age / 10;
                    }
                    password = name.substring(0,2) + String.valueOf(sum) + city.substring(city.length() - 3, city.length());
                }
                else if(age > 18){
                    int diff = 0;
                    while(age > 0){
                        int rem = age%10;
                        diff = rem - diff;
                        age = age / 10;
                    }
                    password = name.substring(name.length() - 3,name.length()) + String.valueOf(Math.abs(diff)) + city.substring(0,2);
                }
            }
            else{
                password = name.substring(0,1) + city.substring(0,1) + name.substring(1,2) + city.substring(1,2);
                if(name.length() > city.length()){
                    password = name + password;
                }
                else if(city.length() > name.length()){
                    password = city + password;
                }
                else{
                    password = city + name + password;
                }
            }
        }
        System.out.println("Wifi Password : "+password);
	}
}