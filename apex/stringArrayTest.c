//class
public class stringArrayTest{
    public static list<string> StringArray(integer data){
        list<string> result = new list<string>();
        for(integer i = 0; i < data; i++){
            result.add('test '+i);
        }
    	return result;
    }
}

//debug code
list<string> res = stringArrayTest.StringArray(3);
system.debug(res);