#include"InsertSort.h"
#include"InsertSort.cpp"
#include"ShellSort.h"
#include"ShellSort.cpp"
#include"SimpleSelectionSort.h"
#include"SimpleSelectionSort.cpp"
#include"HeapSort.h"
#include"HeapSort.cpp"
#include"BubbleSort.h"
#include"BubbleSort.cpp"
#include"QuickSort.h"
#include"QuickSort.cpp"
#include<iostream>
#include<cstring>
// If we don't include the .cpp file while there is template implementation in it, 
// g++ compiler will get a error.
// gcc don't support 'bool' data type.

using namespace std;



int main(int argc, char* argv[])
{
	int 		*seq;
      	int		size;
	int 		seq1[9]={2,4,52,3,7,8,4,12,5};
	float 		seq2[8]={23.42,75.23,75.22,56,8,2.8,23.8,23.9};
	int 		size1=sizeof(seq1)/sizeof(seq1[0]);
	int		size2=sizeof(seq2)/sizeof(seq2[0]);

	if(argc != 3)
	{
		cout<<"Usage:\n\tsort [method id] [sequence type]\n\n\t"
			"method id:\n\t\t"
			"1 -- InsertSort\n\t\t"
			"2 -- ShellSort\n\t\t"
			"3 -- SimpleSelectionSort\n\t\t"
			"4 -- HeapSort\n\t\t"
			"5 -- BubbleSort\n\t\t"
			"6 -- QuickSort\n\t"
			"sequence type:\n\t\t"
			"1 -- int\n\t\t"
			"2 -- float"<<endl;
	}
	else
	{
		// choice sequence type:
		switch((int)*argv[2])
		{
			case '1':
				seq = seq1;
				size = size1;
				break;
			case '2':
				seq = seq1;
				size = size2;
				break;
			default:
				cout<<"Usage error: please input right sequence type!"<<endl;
		}

		// show initial sequence:
		cout<<"The initial sequence: "<<endl;
		for(int i=0; i<size;i++)
		{
			cout<<seq[i]<<"\t";
		}
		cout<<endl;
		
		// choice sort method:
		switch((int)*argv[1])
		{
			case '1':
				cout<<"****************InsertSort***************"<<endl;
				InsertSort(seq,size);
				break;
			case '2':
				cout<<"****************ShellSort***************"<<endl;
				Shell::ShellSort(seq,size);
				break;
			case '3':
				cout<<"****************SimpleSelectionSort***************"<<endl;
				Simple::SimpleSelectionSort(seq,size);
				break;
			case '4':
				cout<<"****************HeapSort***************"<<endl;
				Heap::HeapSort(seq,size);
				break;
			case '5':
				cout<<"****************BubbleSort***************"<<endl;
				Bubble::BubbleSort(seq,size);
				break;
			case '6':
				cout<<"****************QuickSort***************"<<endl;
				Quick::QuickSort(seq,0,size-1,size);
				break;
			default:
				cout<<"Usage error: please input right sort method id!"<<endl;
		}
	}
	return 0;
}
