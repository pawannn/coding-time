public class soslexample{
    public static void mymethod(){
        list<account> a = [select name from account where createddate = TODAY];
        for(account i : a){
            i.name = 'update ' + i.name;
        }
        
        update a;
    }
}