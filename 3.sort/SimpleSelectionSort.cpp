#include "SimpleSelectionSort.h"
#include<iostream>

using namespace std;

namespace Simple
{
	template <typename ElemType>
	void printSeq(ElemType seq[], int num, int i)
	{
		cout<<"The result of "<<i<<"th selection:"<<endl;
		for(int j=0; j<num; j++)
		{
			cout<<seq[j]<<"\t";
		}
		cout<<endl;
	}
	
	template <typename ElemType>
	int SeletMinElem(ElemType seq[], int num, int i)
	{
		int key = i;
		for(int j=i+1; j<num; j++)
		{
			if(seq[key] > seq[j])
			{
				key = j;
			}
		}
		return key;
	}
	
	template <typename ElemType>
	void SimpleSelectionSort(ElemType seq[], int num)
	{
		int minKey;
		ElemType temp;
		for(int i=0; i<num; i++)
		{
			minKey = SeletMinElem(seq, num, i);
			temp = seq[i];
			seq[i] = seq[minKey];
			seq[minKey] = temp;
			printSeq(seq, num, i);
		}
	}
}
