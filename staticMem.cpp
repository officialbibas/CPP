#include<iostream>
using namespace std;

class Car
{
    public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int Car::price=20000;

int main()
{
    Car c1, c2,c3;
    cout<<c1.getPrice()<<endl;
    cout<<c2.getPrice()<<endl;
    cout<<c3.getPrice()<<endl;
}