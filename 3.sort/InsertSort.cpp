#include<iostream>
#include"InsertSort.h"

using namespace std;

// Print the result of every time.
template <typename ElemType>
void printSeq(ElemType seq[], int i)
{
	cout<<"The result of "<<i<<"th :"<<endl;
	for(int j=0; j<=i; j++)
	{
		cout<<seq[j]<<"\t";
	}
	cout<<endl;
}

template <typename ElemType> 
void InsertSort(ElemType seq[],int num)
{
	for(int i=1; i<num; i++)
	{
		// Restore the element which needed to be inseted.
		ElemType	temp=seq[i];
		int		j=i-1;
		while(j>=0 && temp < seq[j])
		{
			// Move the bigger element backward.
			seq[j+1]=seq[j];
			j--;
		}
		// Put the inserted element in the right place.
		seq[j+1]=temp;
		printSeq(seq, i);
	}
}


