#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l = 0, int b = 0)
    {
        length=l;
        breadth=b;
    }
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

class cubiod: public Rectangle
{
    private:
    int height;

    public:
    cubiod(int h=0)
    {
        height = h;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getHeight()
    {
        return height;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};

int main()
{
    Rectangle r1(4,2);
    cout<<"area "<<r1.area()<<endl;
    cubiod c1(3);
    c1.setLength(2);
    c1.setBreadth(5);
   cout<<"volume: "<<c1.volume()<<endl;
   
}