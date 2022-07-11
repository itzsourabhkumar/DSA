#include <iostream>
using namespace std;

int getLargest(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
          res=i;
    }
return res;
}

int main() {
	// your code goes here
	int A[]={12,3,23,55,65,34};
	int n=sizeof(A)/sizeof(A[0]);
	int Ele=getLargest(A,n);
	cout<<"Largest Element in an array: "<<A[Ele]<<endl;
	return 0;
}
