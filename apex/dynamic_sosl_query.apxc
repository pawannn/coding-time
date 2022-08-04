public class soslexample{
    public static void mymethod(){
       string qr= 'Find \'';
       string name='john';
        qr+= name + '\'' + 'returning account';
        list<string> ls1= new list<string>();
        ls1.add('opportunity');
        ls1.add('lead');
        
        for(string i:ls1){
            qr+= ' ,' + i;
        }
        for(list<sobject> b:search.query(qr)){
            system.debug(b);
        }
           
    }
}

//driver code
soslexample.mymethod();