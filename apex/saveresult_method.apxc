public class insertion {
    public static void method(){
        list<account> acc = new list<account>();
        
        for(integer i = 0; i < 10; i++){
            acc.add(new account(name = 'test' + i));
        }
        
        acc.add(new account());
        
        database.SaveResult[] savelist = database.insert(acc, false);
        system.debug(savelist);
        for(database.SaveResult s : savelist){
            if(s.isSuccess()){
                system.debug('I was successfull');
            }
            else{
                system.debug('I was unsuccessfull due to : ');
                list<database.error> errList = s.getErrors();
                for(database.error er : errList){
                    system.debug(er);
                }
            }
        }
    }
}

//driver code
insertion.method();
