#include <iostream>
#include <fstream>
#include <ctime>
#include "Stack.h"
#include "Queue.h"
#include "Bag.h"
#include "QuickFindUF.h"
#include "QuickUnion.h"
#include "WeightQuickUnion.h"
#include "SortCompare.h"
#include "PQCompare.h"
#include "UnorderElementaryMaxPQ.h"
#include "STCompare.h"
using namespace std;

void ShowTime()
{
	time_t t = time(0);   // get time now
	struct tm * now = localtime(&t);
	cout << (now->tm_hour) << ':'
		<< (now->tm_min) << ':'
		<< now->tm_sec
		<< endl;
}
int main()
{
	//test for Stack
// 	Stack<int> s;
// 	s.Push(1);
// 	s.Push(2);
// 	s.Push(4);
// 	s.Push(8);
// 	cout << s.Size() << endl;
// 	cout << s.Peek(1) << endl;
// 	cout << s.Pop()<<endl;
// 	cout << s.Pop() << endl;
// 	s.Push(16);
// 	while (!s.IsEmpty())
// 	{
// 		cout << s.Pop() << endl;
// 	}
	//test for Queue
//	Queue<int> q;
// 	q.Enqueue(1);
// 	q.Enqueue(2);
// 	q.Enqueue(3);
// 	q.Enqueue(4);
// 	cout << q.Size() << endl;
// 	cout << q.Peek(2) << endl;
// 	cout << q.Dequeue() << endl;
// 	cout << q.Size() << endl;
// 	q.Enqueue(8);
// 	while(!q.IsEmpty())
// 	{
// 		cout << q.Dequeue() << endl;
// 	}
	//test for Bag
// 	Bag<double> b;
// 	b.Add(1.0);
// 	b.Add(2.0);
// 	b.Add(8.1);
// 	cout << b.IsEmpty() << endl;
// 	cout << b.Size() << endl;
// 	for (int i = 0; i < b.Size(); i++)
// 	{
// 		cout << b.Peek(i) << endl;
// 	}
	//test UF
// 	ifstream ifs("../data/largeUF.txt");
// 	int nTotal = 0;
// 	ifs >> nTotal;
// 	int x = 0;
// 	int y = 0;
// 	int i = 0;
// 	ShowTime();
// 	QuickUnionUF uf(nTotal);
// 	while (ifs >> x)
// 	{
// 		i++;
// 		ifs >> y;
// 		uf.Union(x, y);
// 	}
// 	ifs.close();
// 	cout << "Compotent count: " << uf.ComponentCount()<<endl;
// 	ShowTime();

	//test SORT
//	SortCompare::CompareTwoSortAlgorithms("MergeSort", "BinaryHeapSort", 1000, 100);

	//test PQ
//	PQCompare<int>::CompareTwoPQ("OrderElementaryPQ", "BinaryHeapPQ", 1000, 100);

	//test ST
	STCompare::Compare("BST", "RedBlackST", 10000000, 1);
	return 0;
}