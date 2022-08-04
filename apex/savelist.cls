public class productInsertion {
    public static void method(){
        list<product2> prod = new list<product2>();
        for(integer i = 1; i <= 5; i++){
            prod.add(new product2(name = 'iphone' + i));
        }
        prod.add(new product2());
        
        database.SaveResult[] savelist = database.insert(prod, false);
        
        for(database.saveresult s : savelist){
            if(s.issuccess()){
                system.debug('Successfully added to list : '+ s.id);
            }
            else{
                system.debug('Could not be added to list due to : ');
                list<database.error> error = s.getErrors();
                for(database.error e : error){
                    system.debug(e);
                }
            }
        }
    }
}

//driver code
productInsertion.method();