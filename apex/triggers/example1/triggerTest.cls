public class triggerTest {
    public static void mymethod(){
        list<account> acc1 = new list<account>();
        acc1.add(new account(name = 'pawan Kalyan'));
        insert acc1;
        
        list<account> acc = [select name from account where name = 'pawan Kalyan'];
        acc[0].name = 'PK' + acc[0].name;
        update acc;
    }
}