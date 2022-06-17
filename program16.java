//Sum of two number through command line argument

import java.util.*;
public class Main {
    public static void main(String args[]){
        int sum = 0;
        for(String x : args){
            int argument = Integer.parseInt(x);
            sum += argument;
        }
        System.out.println(sum);
    }
}