class CalculateMarks{
    public integer CalculateMarks(list<integer> marks){
        integer total = 0;
        for(integer i =0; i< marks.size(); i++){
            total = total + marks.get(i);
        }
        
        return total;
    }
}

class displayData extends CalculateMarks{
    String name, address;
    integer age;
    integer marks;
    void data(String Name, String addr, integer age, integer marks){
        this.name = Name;
        this.address = addr;
        this.age = age;
        this.marks = marks;
        system.debug('Student Name : '+Name);
        system.debug('Student Age : '+age);
       	system.debug('Student Address '+addr);
        system.debug('Total Marks : '+marks);
    }
}

displayData disp = new displayData();
List<integer> marks = new List<integer>();
marks.add(96);
marks.add(100);
marks.add(84);
disp.data('pawan', 'arilova', 19, disp.CalculateMarks(marks));