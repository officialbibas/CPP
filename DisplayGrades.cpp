#include<iostream>
using namespace std;
int main()
{
    int m1, m2, m3, total;
    float avg;
    cout<< "Enter marks of Three Subjects: "<< endl;
    cin >> m1 >> m2 >> m3;
    total = m1+m2+m3;
    avg = total/3;
    if(avg>=60){
        cout <<'A';
    }
    else if(avg>=35 && avg <60)
    {
        cout<<'B';
    }
    else{
        cout<<'C';
    }
    return 0;
}