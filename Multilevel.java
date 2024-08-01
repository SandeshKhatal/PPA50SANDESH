class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
    void Fun()
    {
         System.out.println("Inside Base fun");
    }
}


class Derived extends Base
{
      public int X,Y;
      public Derived()
      {
        System.out.println("Derived constructor");
      }
      void Gun()
      {
        System.out.println("Inside Derived Gun");
      }
}

class DerivedX extends Derived
{
      public int P,Q;
      public DerivedX()
      {
        System.out.println("DerivedX constructor");
      }
      void Sun()
      {
        System.out.println("Inside DerivedX Sun");
      }
}

class Multilevel
{
    public static void main(String a[])
    {
         DerivedX dobj =new DerivedX();
         dobj.Fun();
         dobj.Gun();
         dobj.Sun();
    }
}