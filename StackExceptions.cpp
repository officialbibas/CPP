#include<iostream>
using namespace std;

class StackOverFlow: exception{};
class StackUnderFlow: exception{};

class Stack
{
    private:
    int *head;
    int top = -1;
    int size;

    public:
    Stack(int sz)
    {
        size = sz;
        head = new int[size];
    }

    void push(int x)
    {
        if(top == size-1)
            throw StackOverFlow();
        top++;
        head[top] = x;
    }

    int pop()
    {
        if(top==-1)
         throw StackUnderFlow();
         return head[top--];
    }
};

int main()
{
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(6);
    s.pop();
}