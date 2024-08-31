#include<iostream>
#include<fstream>

using namespace std;

class Item
{
    private:
    string name;
    float price;
    int qty;

    public:

    Item(){}
    Item(string n, float p, int q)
    {
        name = n;
        price = p;
        qty = q;
    }
    friend ofstream & operator<<(ofstream &ofs, Item &i);
    friend ifstream & operator>>(ifstream &ifs, Item &i);
    friend ostream & operator<<(ostream &os, Item &i);
};



int main()
{
    int n;
    string name;
    float price;
    int qty;
    cout<<"Enter the Number of Item "<<endl;
    cin>>n;

    Item *list[n];
    cout<<"Enter all Items "<<endl;
    for (int i = 0; i<n; i++)
    {
        cout<<i+1<<" Item name, Price and quantity"<<endl;
        cin>>name;
        cin>>price;
        cin>>qty;
        list[i] = new Item(name, price, qty);
    }

    ofstream ofs("Item.txt");
    for(int i=0;i<n;i++)
    {
        ofs<<*list[i];
    }
    Item item;
    ifstream ifs("Item.txt");
    for(int i = 0; i<n; i++)
    {
        ifs>>item;
        cout<<"Item "<<i<<item<<endl;
    }
    
}
ofstream & operator<<(ofstream &ofs, Item &i)
{
    ofs<<i.name<<i.price<<i.qty<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs, Item &i)
{
    ifs>>i.name>>i.price>>i.qty;
    return ifs;
}
ostream & operator<<(ostream &os, Item &i)
{
    os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return os;
}
