#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    //using pointer to create object in stack
   /* Rectangle r;
    Rectangle *p; // using pointer
    p = &r;
    p->length = 10;
    p->breadth = 5;
    cout<<p->area()<<endl; //using pointer

    */

   //using heap 
    Rectangle *p = new Rectangle; ///dynamic object created in heap
    p->length = 10;
    p->breadth=4;
    cout<<p->area()<<endl;
    return 0;

}