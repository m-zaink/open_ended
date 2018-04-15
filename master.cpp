#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "master.h"

using namespace std;

template <class T>
void Sorting<T>::get_item()
{
    cout<<"\n Enter the numbers of elements in array:"<<endl;
    cin>>n;
    cout<<"\n Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

template <class T>
void Sorting<T>::selction_sort()
{
    T temp;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
            }
    }
}

template <class T>
void Sorting<T>::buble_sort()
{
    T temp;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
            }
    }
}

template <class T>
void Sorting<T>::insertion_sort()
{
    T temp;
    int j;

    for(int i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

template <class T>
void Sorting<T>::display()
{
    for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }

}

template <class T>
void Linear_search(T *a, T element, int n)
{
	int z=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]== element)
			{
				z=1;
				cout<<"\n Element found at position = "<<i+1<<"\n\n";
			}
		else
		if(z!=1)
			{
				z=0;
			}
	}
	if(z==0)
	cout<<"\n Element not found in the list\n\n";
}

template <class T>
void Binary_search(T *a, T element, int n)
{
	int begin=0,end=n-1;
	int mid=begin+end/2;
	while((a[mid]!=element) && (n>0))
	{
		if(element>a[mid])
		begin=mid;
		else
		end=mid;
		mid=(begin+end)/2;
		n--;
	}

	if(a[mid]==element)
	cout<<"\n Element found at position = "<<mid+1<<"\n\n";
	else
	cout<<"\n Element not found in the list\n\n";

}

void Numbers::readnum()
{
    cout<<"\n Enter a valid number:"<<endl;
    cin>>num;
}

bool Numbers::checkarmstrong(int n)
{
	int temp,sum=0,digit;

	temp=n;
	while(temp>0)
	{
		digit=temp%10;
		sum=sum+(digit*digit*digit);
		temp=temp/10;
	}
	if(num==sum)
		return true;
	else
		return false;
}
bool Numbers::checkpalindrome(int n)
{
	int temp,rev=0,d;
	temp=n;
	while(n>0)
	{
		d=n%10;
		rev=(rev*10)+d;
		n=n/10;

	}
	if(temp==rev)
		return true;
	else
		return false;

}
int Numbers::find_sum_of_digits(int n)
{
	int d,sum=0;
	while(n!=0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	return sum;
}
int Numbers::print_reverse_of_number(int n)
{
	int rev=0;
	while(n!=0)
	{
		rev=rev*10+(n%10);
		n=n/10;

	}
	return rev;
}
bool Numbers::checkprime(int n)
{
	int  i;
	bool isPrime = true;
	for(i = 2; i <= n / 2; ++i)
	  {
	      if(n % i == 0)
	      {
	          isPrime = false;
	          break;
	      }
	  }
	  return isPrime;
}
bool Numbers::checkperfect(int n)
{
	int i=1,sum=0;
	while(i<n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;
	}

	if(sum==n)
		return true;
	else
		return false;
}
bool Numbers::checkeven(int n)
{
	int i;
	i=n%2;
	if(i==0)
		return true;
	else
		return false;
}
bool Numbers::checkamicable(int a,int b)
{
    int s=0,i;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    if(s==b)
    {
        s=0;
        for(i=1;i<b;i++)
        {
            if(b%i==0)
            {
                s=s+i;
            }
        }
        if(s==a)
            return true;
        else
            return true;
    }
}

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
