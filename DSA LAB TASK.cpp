#include<iostream>
using namespace std;
int main()
{
int a[5];
int *ptr1=new int;
int *ptr2=new int[5];
cout<<"enter elements"<<endl;
 for(int i=0; i<5; i++)
 {
 	cin>>a[i];
 }
cout<<"elements are"<<endl;
	for(int i=0; i<5; i++)
	{
	cout<<a[i]<<endl;
}
return 0;
}