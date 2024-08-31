#include<iostream>
using namespace std;
class Test
{
    private:
    int a;
    int b;
    public:

    static int count;
    Test()
    {
        a=10;
        b=15;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int Test::count = 0;
int main()
{
    Test t1, t2;
    cout<<Test::count<<endl;
    cout<<t1.getCount<<endl;
    t1.count =26;
    cout<<t2.count<<endl;
}