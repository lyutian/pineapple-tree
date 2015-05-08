#include"BubbleSort.h"
#include<iostream>

using namespace std;

namespace Bubble
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

	template <typename ElemType>
		void BubbleSort(ElemType seq[], int size)
		{
			ElemType temp;
			for(int i=0; i<size-1; i++)
			{
				// biger number down to tail.
				for(int j=0; j<size-i-1; j++)
				{
					if(seq[j] > seq[j+1])
					{
						temp = seq[j+1];
						seq[j+1] = seq[j];
						seq[j] = temp;
					}
				}
				printSeq(seq, i, size);
			}
		}
}

