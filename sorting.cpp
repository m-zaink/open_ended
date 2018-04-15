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
