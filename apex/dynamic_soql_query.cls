public class contactPrint {
    public static void getContactName(){
        string qr = 'select id';
        
        string []fieldList = new List<string>();
        
        fieldList.add('name');
        fieldList.add('phone');
        fieldList.add('numberofemployees');
        
        string objName = 'Account';
        
        for(string f: fieldlist){
            qr = qr + ', ' + f;
        }
        
        //select id, name, phone
        
        qr += ' from ' + objName;
        //select id, name, phone from Account
        
        list<sObject> x = Database.query(qr);
        system.debug(qr);
        for(sobject a : x){
            system.debug(a);
        }
    }
}
