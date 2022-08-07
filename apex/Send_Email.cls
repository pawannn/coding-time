public class SendingEmail {
    public static void mail(){
        Messaging.SingleEmailMessage mail = new Messaging.SingleEmailMessage();
        String[] toAddresses = new String[] {'Email1', 'Email2', 'Email3'}; //any number of emails 
        mail.setToAddresses(toAddresses);
        mail.setSubject('SalesForce email testing');
        mail.setPlainTextBody('phak you');
        Messaging.sendEmail(new Messaging.SingleEmailMessage[] { mail });
    }
}

//driver code (A.W.)

SendingEmail.mail();