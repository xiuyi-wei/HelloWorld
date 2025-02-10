#include<iostream>

using namespace std;
//xiaozhang adds the comment to the sort function
void sort(int array[],int size)
{
	int temp = 0;
	//冒泡排序
	for(int i = 0;i<size;i++)
	{
		for(int j = 0;j<size-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				swap(array[j+1],array[j]);
			}
		}
	}
	
}

int main()
{
	int array[] = {12,4,95,56,25,1};
	int size = sizeof(array)/sizeof(array[0]);
	sort(array,size);
	for(auto& a:array)
	{
		cout<<a<<endl;
	}
	return 0;
}
