public class exceptionHandling {
    public static void mymethod(integer i){
        try{
            if(i < 0){
                throw new numberisNegativeException();
            }
            else{
                system.debug(i);
            }
        }
        catch(numberisNegativeException e){
            system.debug('negative');
        }
    }
}

//driver code
exceptionHandling.mymethod();