#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "master.h"

using namespace std;

Stack<T>::Stack(int maxstacksize)
{
    top = -1;
    maxsize = maxqueuesize;
    stack = new T[size];
}

Stack<T>::~Stack()
{
    delete[] stack;
}

bool Stack<T>::isempty()
{
    if(top == -1)
        return true;
    return false;
}

bool Stack<T>::isfull()
{
    if(top == maxsize-1)
        return true;
    return false;
}

void Stack<T>::push()
{
    if(isfull())
        cout<<"\nSTACK OVERFLOW"<<endl;
    else{
        T input;
        cout<<"\nEnter element to push : ";
        cin>>input;
        stack[++top] = input;
    }
}

void Stack<T>::pop()
{
    if(isempty())
        cout<<"\nSTACK UNDERFLOW"<<endl;
    else
        cout<<"\nElement popped : "<<stack[top--]<<endl;
}
void Stack<T>at_top()
{
    if(!isempty())
        cout<<"\nElement at top : "<<stack[top]<<endl;
    else
        cout<<"\nSTACK UNDERFLOW"<<endl;
}
void display()
{
    if(!isempty())
    {
        cout<<"\nStack : "<<endl;
        cout<<"\nTOS<-"
        for(int i = 0; i <= top; ++i)
            cout<<stack[top]<<"<-";
        cout<<"<-BOS";
    }
    else
        cout<<"\nSTACK UNDERFLOW"<<endl;
}
