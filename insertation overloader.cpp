#include<iostream>
using namespace std;

class complex
{
    private:
    int real;
    int img;

    public:

    complex(int r = 0, int i= 0)
    {
        real = r;
        img = i;
    }

    /* void display()
     {
        cout<<real<<" + "<<img<<"i"<<endl;
     }
     */

    friend ostream & operator<<(ostream &o, complex &c);
};
ostream & operator<<(ostream &o, complex &c)
{
    o<<c.real<<" + "<<c.img<<"i";
    return o;
}
int main()
{
    complex c(5,4);
    cout<<c;
   // operator<<(co,c);
    return 0;
}