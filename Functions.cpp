#include<iostream>
using namespace std;

void display ()
{
    cout<<"Hello World ";
}
float add(float x, float y)
{
    float z;
    z=x+y;
    return z;
}
int maxim(int a, int b, int c)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else 
    return c;
}

int main()
{
    
    display();
    cout<<endl;

    float a, b,c;
    cout<<"Enter Two Numbers "<<endl;
    cin>>a>>b;
    c=add(a,b);
    cout<<"Sum is "<<c<<endl;
    int x,y,z, m;
    cout<<"Enter Three Numbers: "<<endl;
    cin>>x>>y>>z;
    m=maxim(x,y,z);
    cout<<m<<endl;

    return 0;

}