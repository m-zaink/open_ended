#include<iostream>
#include<cstdlib>

using namespace std;

template<class T>
class Queue
{
      private:
             int front,rear;
             T *queue;
             int maxsize;
      public:
             Queue(int maxqueuesize)
             {
                       front=0;
                       rear=-1;
                       maxsize=maxqueuesize;
                       queue=new T[maxsize];
             }
             ~Queue()
             {
                     delete[] queue;
             }
             int isempty();
             int isfull();
             void insert();
             void deletion();
             void atfront();
             void atrear();
             void display();
};

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
     cout<<"\nSorry the queue is empty!";
     else
     cout<<"\nFront element of the queue is : "<<queue[front];
}

template<class T>
void Queue<T>::atrear()
{
     if(isempty())
     cout<<"\nSorry the queue is empty!";
     else
     cout<<"\nRear element of the queue is : "<<queue[rear];
}

template<class T>
void Queue<T>::insert()
{
     T element;
     if(isfull())
     cout<<"\nSorry the queue is full!";
     else
     {
     cout<<"\nEnter the element to insert : ";
     cin>>element;
     queue[++rear]=element;
     }
}

template<class T>
void Queue<T>::deletion()
{
     if(isempty())
     cout<<"\nSorry the queue is empty!";
     else
     cout<<"\nDeleted element of the queue is : "<<queue[front++];
}

template<class T>
void Queue<T>::display()
{
     if(isempty())
     cout<<"\nSorry the queue is empty!";
     else
     {
         cout<<"\nQueue elements are : ";
         for(int i=front;i<=rear;i++)
         {
                 cout<<"\t"<<queue[i];
         }
     }
}

