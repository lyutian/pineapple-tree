#include<iostream>
#include"HeapSort.h"

using namespace std;

namespace Heap
{
	template <typename ElemType>
	void printSeq(ElemType seq[], int i, int size)
	{
		cout<<"The "<<i<<"th sort result:"<<endl;
		for(int j=0; j<size; j++)
		{
			cout<<seq[j]<<"\t";
		}
		cout<<endl;
	}
	
	// Ajust heap while only root node doesn't fit demand.
	template <typename ElemType>
	void heapAjust(ElemType seq[], int rootNode, int size)
	{
		ElemType temp;
		int child = rootNode*2+1;
		while(child < size)
		{
			// return the bigger node's index, we want to swap it to root.
			if(child+1 < size)
			{
				child = (seq[child]>seq[child+1])?(child):(child+1);
			}
			// check if root is small than its child.
			if(seq[child] > seq[rootNode])
			{
				temp = seq[rootNode];
				seq[rootNode] = seq[child];
				seq[child] = temp;
				rootNode = child;
				child = rootNode*2+1;
			}
			else
			{
				break;
			}
		}
	}
	
	template <typename ElemType>
	void buildingHeap(ElemType seq[], int size)
	{
		for(int i=(size-1)/2; i>=0; i--)
		{
			heapAjust(seq, i, size);
		}
	}
	
	template <typename ElemType>
	void HeapSort(ElemType seq[], int size)
	{
		ElemType temp;
		buildingHeap(seq, size);
	
		for(int i=size-1; i>0; i--)
		{
			// swap rootNode and last leafNode
			temp = seq[i];
			seq[i] = seq[0];
			seq[0] = temp;
			heapAjust(seq,0,i);
			printSeq(seq,size-i,size);
		}
	}
}
