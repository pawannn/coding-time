public class records {
    public static void record(){
        list<account> act = [select name from account where name = 'ganesh'];
        for(account a : act){
            a.name = 'sai' + a.name;
        }
        account ac1 = new account(name = 'pawan');
        account ac2 = new account(name = 'girish');
        act.add(ac1);
        act.add(ac2);
        upsert act;
    }
}

//driver code
records.record();