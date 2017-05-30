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
#include "Graph.h"
#include "DepthFirstSearch.h"
#include "BreadthFirshSearch.h"
#include "DepthFirstPaths.h"
#include "BreadthFirshPaths.h"
#include "DepthFirstCC.h"
#include "BreadthFirshCC.h"
#include "DepthFirstCycle.h"
#include "BreadthFirstCycle.h"
#include "DepthFirstTwoColor.h"
#include "BreadthFirstTwoColor.h"
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
//	STCompare::Compare("BST", "RedBlackST", 10000000, 1);
	ifstream ifs("../data/tinyG.txt");
	Graph  G(ifs);
	G.Show();
	ifs.close();
 	DepthFirstSearch dfs(G, 0);
 	BreadthFirstSearch bfs(G, 0);
 	cout << "Search Result Count are " << dfs.Count() << " and " << bfs.Count() << endl;
	DepthFirstPaths dfp(G, 0);
	BreadthFirstPaths bfp(G, 0);
	cout << "0 path to 6 are: " << endl;
	Stack<int> s1 = dfp.PathTo(6);
	while (!s1.IsEmpty())
	{
		cout << s1.Pop();
		if(!s1.IsEmpty())
		{
			cout << "-";
		}
	}
	cout << endl;
	Stack<int> s2 = bfp.PathTo(6);
	while (!s2.IsEmpty())
	{
		cout << s2.Pop();
		if (!s2.IsEmpty())
		{
			cout << "-";
		}
	}
	cout << endl;
	DepthFirstCC dfcc(G);
	BreadthFirstCC bfcc(G);
	cout << "CC are: " << dfcc.Count() << " and " << bfcc.Count() << endl;

	DepthFirstCycle dfcy(G);
	BreadthFirstCycle bfcy(G);
	cout << "Cycle are " << dfcy.HasCycle() << " and " << bfcy.HasCycle() << endl;

	DepthFirstTwoColor dftc(G);
	BreadthFirstTwoColor bftc(G);
	cout << "TwoColor are " << dftc.IsTwoColor() << " and " << bftc.IsTwoColor() << endl;
	return 0;
}