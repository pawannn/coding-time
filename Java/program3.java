//WAP to calculate Area of Circle and Rectangle by Overloading constructor, radius and side should be initialize through constructor.

class Areas
{
    void area(float x, float y)
    {
        System.out.println("Area of rectangle : "+x*y+" sq units");
    }
    void area(double x)
    {
        double z = 3.14 * x * x;
        System.out.println("Area of circle : "+z+" sq units");
    }
}
public class Main
{
     public static void main(String args[]) 
	{
	   Areas ob = new Areas();
	   ob.area(11,12);
	   ob.area(2.5);
        }
}
