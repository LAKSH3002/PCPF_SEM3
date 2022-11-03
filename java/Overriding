package com.learning;

class A
{
    public void meth1()
    {
        System.out.println("I AM INTO METH 1 OF CLASS A");
    }
    public void meth2()
    {
        System.out.println("THIS IS METHOD 567588");
        for(int i=0;i<5;i++)
        {
            System.out.print(i+" ");
        }
        System.out.println();
    }
}
class B extends A{
    @Override// override principle works only in inheritance.
    public void meth2()
    {
        System.out.println("THIS IS METHOD 2");
        int a = 5;
        int b = 10;
        int c = a+b;
        System.out.println(c);
    }
    public void meth3()
    {
        System.out.println("I AM METHOD 3 OF CLASS B");
    }
}
public class method_overriding
{
    public static void main(String[] args) {
     A a =  new A();
     a.meth2();
        System.out.println();

     B b = new B();
     b.meth2();

    }
}
