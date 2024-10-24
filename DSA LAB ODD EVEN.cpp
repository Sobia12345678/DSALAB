#include <iostream>
using namespace std;
int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    int ecount=0;
    int ocount=0;
    
    int *ptr=new int[8];
    for(int i=0; i<8; i++)
    {
    	if(arr[i]%2==0)
    	{
    		ecount++;
		}
		else if(arr[i]%2!=0)
		{
			ocount++;
		}
	}
	cout<<"print even="<<ecount<<endl;
	cout<<"print odd="<<ocount<<endl;
    return 0;
}