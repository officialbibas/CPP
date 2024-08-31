#include<iostream>
using namespace std;

class rational
{
private:
    int p;
    int q;
public:
    rational(int p =1, int q=1)
    {
        this->p = p;
        this->q = q;
    }
    int getP()
    {
        return p;
    }
    int getQ()
    {
        return q;
    }
    void setP(int p)
    {
        this->p=p;
    }
    void setQ(int q)
    {
        this->q=q;
    }
    rational operator+(rational r)
    {
        rational t;
        t.p=this->p*r.q +q*r.p;
        t.q = this->q*r.q;
        return t;
    }
    void display()
    {
        cout<<p<<"/"<<q<<endl;
    }
   friend ostream & operator<<(ostream &o, rational &r);

};

ostream & operator<<(ostream &o,  rational r)
{
    o<<r.p<<"/"<<r.q;
    return o;
}


int main()
{
    rational r1(5,2),r2(2,5), r3;
    r3 = r1+r2;
    cout<<r3;
    
}
