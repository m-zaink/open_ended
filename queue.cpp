#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "master.h"

using namespace std;


template <class T>
Queue<T>::Queue(int maxqueuesize)
{
          front=0;
          rear=-1;
          maxsize=maxqueuesize;
          queue=new T[maxsize];
}

template <class T>
Queue<T>::~Queue()
{
        delete[] queue;
}

template<class T>
int Queue<T>::isempty()
{
    if(front==0&&rear==-1||front==rear)
    return 1;
    else
    return 0;
}

template<class T>
int Queue<T>::isfull()
{
    if(rear==maxsize-1)
    return 1;
    else
    return 0;
}

template<class T>
void Queue<T>::atfront()
{
     if(isempty())
        cout<<"\nSorry the queue is empty!"<<endl;
     else
        cout<<"\nFront element of the queue is : "<<queue[front]<<endl;
}

template<class T>
void Queue<T>::atrear()
{
     if(isempty())
     cout<<"\nSorry the queue is empty!"<<endl;
     else
     cout<<"\nRear element of the queue is : "<<queue[rear]<<endl;
}

template<class T>
void Queue<T>::insert()
{
     T element;
     if(isfull())
     cout<<"\nSorry the queue is full!"<<endl;
     else
     {
     cout<<"\nEnter the element to insert : "<<endl;
     cin>>element;
     queue[++rear]=element;
     }
}

template<class T>
void Queue<T>::deletion()
{
     if(isempty())
        cout<<"\nSorry the queue is empty!"<<endl;
     else
         cout<<"\nDeleted element of the queue is : "<<queue[front++]<<endl;
}

template<class T>
void Queue<T>::display()
{
     if(isempty())
     cout<<"\nSorry the queue is empty!"<<endl;
     else
     {
         cout<<"\nQueue :"<<endl;
         cout<<"FRONT : "
         for(int i=front;i<=rear;i++)
         {
                 cout<<"\t"<<queue[i];
         }
         cout<<"\t : READ"<<endl;
     }
}
