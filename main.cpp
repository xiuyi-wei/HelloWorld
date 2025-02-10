#include<iostream>

using namespace std;
//xiaozhang adds the comment to the sort function
void sort(int array[],int size)
{
	int temp = 0;
	bool flag = false;
	//冒泡排序
	for(int i = 0;i<size;i++)
	{
		for(int j = 0;j<size-1-i;j++)
		{
			//小张修改排序算法，从大到小排序
			if(array[j]<array[j+1])
			{
					swap(array[j+1],array[j]);
					flag = true;
			}
		}
		if(!flag)
		{
			break;
		}
	}
	
}

int main()
{
	//小张添加的注释，然后等待小李添加注释
	int array[] = {12,4,95,56,25,1};
	int size = sizeof(array)/sizeof(array[0]);
	sort(array,size);
	for(auto& a:array)
	{
		cout<<a<<endl;
	}
	return 0;
}
