#include<iostream>
#include<cmath>
using namespace std;
 class Shape
 {
    public:
        virtual float area()=0;
        virtual float perimeter()=0;
 };
 class Rectangle:public Shape
 {
    private:
    float length;
    float breadth;
    public:
        Rectangle(float l, float b)
        {
            length = l;
            breadth = b;
        }
        float area()
        {
            return length*breadth;
        }

        float perimeter()
        {
            return 2*(length+breadth);
        }
 };
 class Circle: public Shape
 {
    private:
    float radius;
    public:
    Circle(float r)
    {
        radius = r;
    }
        float area()
        {
           return M_PI*radius*radius;
        }
        float perimeter()
        {
            return 2*M_PI*radius;
        }
 };

 int main()
 {
    Shape *p = new Rectangle(10,5);
   cout<<"area of rectangle "<< p->area()<<endl;
    cout<<"Perimeter of Rectangle "<<p->perimeter()<<endl;
    p= new Circle(5);
   cout<<"Area of circle "<< p->area()<<endl;
    cout<<"Perimeter of Circle "<<p->perimeter();
    return 0;
 }