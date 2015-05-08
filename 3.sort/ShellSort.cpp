#include"ShellSort.h"
#include<iostream>

using namespace std;

namespace Shell
{
	template <typename ElemType>
	void printSeq(ElemType seq[],  int num, int dk)
	{
		cout<<"The result of <dk="<<dk<<"> :"<<endl;
		for(int j=0; j<num; j++)
		{
			cout<<seq[j]<<"\t";
		}
		cout<<endl;
	}
	
	
	template <typename ElemType> 
	void ShellInsertSort(ElemType seq[], int num, int dk)
	{
		for(int i=dk; i<num; i++)
		{
			int 		j=i-dk;
			ElemType	temp=seq[i];
	       		while(j>=0 && temp < seq[j])	// checking alone the left side.
			{
		       		seq[j+dk]=seq[j];
		       		j-=dk;
	       		}
			seq[j+dk]=temp;		// j already in left of right place,+dk and put temp. 
		}
	}
	
	
	template <typename ElemType> 
	void ShellSort(ElemType seq[],int num)
	{
		int dk;
		if(num%2 == 0)		// ceil(num/2)
		{
			dk=num/2;
		}
		else
		{
			dk=num/2+1;
		}
		while(1)
		{
			ShellInsertSort(seq, num, dk);
			printSeq(seq, num, dk);
	
			if(dk == 1)
			{
				break;
			}
	
			if(dk%2 == 0)	//ceil(dk/2)
			{
				dk /= 2;
			}
			else
			{
				dk = dk/2+1;
			}
		}
	}
}
