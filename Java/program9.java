//WAP to create heterogeneous ArrayList and to retrieve using iterator().

import java.util.ArrayList;
import java.util.Iterator;
public class Main
{
	public static void main(String[] args) {
	    ArrayList<Object> numbers = new ArrayList<Object>();
        numbers.add(1);
        numbers.add("one");
        numbers.add(2);
        numbers.add("two");
	    Iterator<Object> it = numbers.iterator();
	    while(it.hasNext()){
	        Object i = it.next();
	        System.out.println(i);
      }
	}
}
