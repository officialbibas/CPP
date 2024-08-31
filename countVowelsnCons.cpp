#include<iostream>
using namespace std;
int main()
{
    string s;
    int vowels=0, space=0, consonant=0;
    cout<<"Enter the String: "<<endl;
    getline(cin,s);
    for(int i=0; s[i]!='\0';i++)
    {
        if(s[i]=='A'|| s[i]=='E'||s[i]=='I'|| s[i]=='O'||
        s[i]=='U'|| s[i]=='a'||s[i]=='e'|| s[i]=='i'||
        s[i]=='o'|| s[i]=='u')
        vowels++;
        else if(s[i]==' ')
        space++;
        else
        consonant++;
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Word: "<<space+1<<endl;
    cout<<"consonant: "<<consonant<<endl;
    return 0;

}