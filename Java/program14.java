import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = new String();
		System.out.println("Enter your input: ");
		input = s.nextLine();
		boolean stat = false;
		for (String x : args)
		{
			if (x.equals(input))
			{
				stat = true;
				break;
			}
		}
		if (!stat){
			throw new ArithmeticException("Not found");
		}
		else{
		    System.out.println("String Found");
		}
	}
}
