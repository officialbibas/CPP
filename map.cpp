#include<iostream>
#include<map>

using namespace std;

int main()
{
map<int, string> m;

m.insert(pair<int,string>(1,"Ravi"));
m.insert(pair<int,string>(2,"Bishal"));
m.insert(pair<int, string>(3,"Ram"));


map<int,string>::iterator itr;
for(itr=m.begin();itr!=m.end();itr++)
{
    cout<<itr->first<<" "<<itr->second<<endl;
}

cout<<"Iterator to search "<<endl;
map<int,string>::iterator itr1;
itr1=m.find(2);
cout<<"Value found is "<<endl;
cout<<itr1->first<<" "<<itr1->second<<endl;

}