#include <iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
      if(arr[i]<arr[i-1])
         return false;
return true;
}

int main() {
	// your code goes here
	int A[]={1,2,3,452,89};
	int n=sizeof(A)/sizeof(A[0]);
	if(isSorted(A,n))
	   cout<<"Array is Sorted"<<endl;
    else
       cout<<"Array is unsorted"<<endl;
	return 0;
}
