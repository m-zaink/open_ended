#ifndef MASTER_H
#define MASTER_H

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

/*Generic sorts:Selection sort,Bubble sort,Insertion sort*/
template <class T>
class Sorting
{
	int n;
	T *a;
	public:
      Sorting(int size)
      {
            n=size;
            a = new T[size];
      }
	void get_item();
	void selction_sort();
	void buble_sort();
	void insertion_sort();
	void display();
};

template<class T>
class Queue
{
      private:
             int front,rear;
             T *queue;
             int maxsize;
      public:
         Queue(int maxqueuesize);
         ~Queue();
         int isempty();
         int isfull();
         void insert();
		 void deletion();
         void atfront();
         void atrear();
         void display();
};

template<class T>
class Stack{
	private:
		int top;
		T *stack;
		int maxsize;
	public:
		Stack(int maxstacksize);
		~Stack();
		bool isempty();
		bool isfull();
		void push();
		void pop();
		void at_top();
		void display();
};


class Numbers{
	private:
	int num;
	public:
	void readnum();
	bool checkarmstrong(int n);
	bool checkpalindrome(int n);
	int find_sum_of_digits(int n);
	int print_reverse_of_number(int n);
	bool checkprime(int n);
	bool checkperfect(int n);
	bool checkeven(int n);
	bool checkamicable(int a,int b);


};


template <class T>
void Linear_search(T *a, T element, int n);

template <class T>
void Binary_search(T *a, T element, int n);

#endif
