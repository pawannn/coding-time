

public class mergeRecords {
    public static void method(){
        list<lead> l1 = [select firstname, lastname from lead where createdDate = TODAY];
        system.debug(l1);
        lead a = l1[0];
        lead b = l1[1];
        
        lead a1 = l1[2];
        lead b2 = l1[3];
        
        merge a b;
        merge a1 b2;
    }
}

//driver code
mergeRecords.method();