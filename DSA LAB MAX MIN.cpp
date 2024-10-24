#include<iostream>
using namespace std;
int main()
{
	const int size=5;
	int arr[size];
	cout<<"enter"<<size<<"numbers\n";
	for(int i=0; i<size;i++)
	{
		cin>>arr[i];
	}
	int  min=arr[0];
	int max=arr[0];
	for (int i=0; i<size; i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<"maximum value:"<<max<<endl;
	cout<<"minmum value:"<<min<<endl;
	return 0;
}