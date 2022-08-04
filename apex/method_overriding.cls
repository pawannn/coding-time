public class furniture {
    integer legs;
    string colors;
    decimal cost;
    public virtual void displayData(integer noOfLegs, string color, decimal price) {
        System.debug('Furniture : ');
        this.legs = noOfLegs;
        this.colors = color;
        this.cost = price;
        system.debug(legs);
        system.debug(colors);
        system.debug(price);
    }
}

public class cupboard extends furniture{
    public override virtual void displayData(integer noOfLegs, string color, decimal price) {
        System.debug('cupboard : ');
        this.legs = noOfLegs;
        this.colors = color;
        this.cost = price;
        system.debug(legs);
        system.debug(colors);
        system.debug(price);
    }
}

public class chair extends furniture {
    public override void displayData(integer noOfLegs, string color, decimal price) {
        System.debug('chair : ');
        this.legs = noOfLegs;
        this.colors = color;
        this.cost = price;
        system.debug(legs);
        system.debug(colors);
        system.debug(price);
    } 
}
furniture obj1, obj2, obj3;
obj1 = new furniture();
obj1.displayData(4, 'red', 22.3);

obj2 = new chair();
obj2.displayData(4, 'red', 22.3);

obj3 = new cupboard();
obj3.displayData(4, 'while', 30.5);