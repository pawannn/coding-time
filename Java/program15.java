//Square of a number through command line argument

import java.util.*;
public class Main {
    public static void main(String args[]){
        int argument = Integer.parseInt(args[0]);
        System.out.println((int)Math.pow(argument, 2));
        
    }
}