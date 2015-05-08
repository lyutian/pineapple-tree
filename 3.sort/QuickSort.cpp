#include"QuickSort.h"
#include<cstdlib>
#include<iostream>

using namespace std;

namespace Quick
{
	template <typename ElemType>
		void printSeq(ElemType seq[], int size)
		{
			cout<<"The result after once partition:"<<endl;
			for(int j=0; j<size; j++)
			{
				cout<<seq[j]<<"\t";
			}
			cout<<endl;
		}
	// pay attention to here, how can swap two entiries in an array? shit! trifle my 1 hours!
	template <typename ElemType>
		void swap(ElemType *a, ElemType *b)
		{
			ElemType temp;
			temp=*a;
			*a=*b;
			*b=temp;
		}

	template <typename ElemType>
		int partition(ElemType subSeq[], int low, int high)
		{
			ElemType pivotal=subSeq[low];
			while(low<high)
			{
				while(low<high && pivotal<=subSeq[high])
				{
					high--;
				}
				swap(&subSeq[low], &subSeq[high]);
				while(low<high && pivotal>=subSeq[low])
				{
					low++;
				}
				swap(&subSeq[low], &subSeq[high]);
			}
			return low;
		}

	template <typename ElemType>
		void QuickSort(ElemType seq[], int low, int high, int size)
		{
			if(low<high)
			{
				int pivotalKey=partition(seq,low,high);
				printSeq(seq,size);
				if(pivotalKey-1>low)
				{
					QuickSort(seq,low,pivotalKey-1,size);
				}
				if(pivotalKey+1<high)
				{
					QuickSort(seq,pivotalKey+1,high,size);
				}
			}
		}
}
