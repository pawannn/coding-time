global class UpdateAccountSite implements database.Batchable<sObject> {
    global database.querylocator start(database.BatchableContext bc){
        return database.getQueryLocator([select site from account where name like '%test%']);
    }
    
    global void execute(database.BatchableContext bc, list<account> acc){
        for(account a : acc){
            a.site = 'TestField';
        }
        
        update acc;
    }
    
    global void finish(database.BatchableContext bc){
        messaging.SingleEmailMessage mail = new messaging.SingleEmailMessage();
        string[] ToAddress = new String[]{'Email1@gmail.com', 'Email2@gmail.com'};
        mail.setToAddresses(ToAddress);
        mail.setSubject('Account Site Updated');
        mail.setPlainTextBody('Your Account Site has been Successfully updated');
        messaging.sendEmail(new messaging.singleEmailMessage[]{ mail });
    }
}

//driver code (A.W.)

UpdateAccountSite UAS = new UpdateAccountSite();
database.executebatch(UAS);