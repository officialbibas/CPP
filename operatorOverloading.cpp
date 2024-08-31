#include<iostream>
using namespace std;

class Complex
{
  private:
    int real;
    int img;

    public:
    Complex(int r=0, int i=0)
    {
        real=r;
        img =i;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

  /*  Complex add(Complex a) //// Operator Overloading
    {
        Complex temp;
        temp.real = real + a.real;
        temp.img = img + a.img;
        return temp;
    }
    */
   friend Complex operator+(Complex c1, Complex c2);  /// Friend operator Overloader
};

Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real +c2.real;
    t.img = c1.img + c2.img;
    return t;
}

    int main()
    {
      /*  Complex c1, c2, c3;
        c1.real=5;c1.img=3;
        c2.real;c2.img;
        c3=c1+c2;   */

        Complex c1(5,3), c2(2,1), c3;
        c3=c1+c2;
        c3.display(); 
        return 0;
    }

