#include <iostream>
using namespace std;

int Second_largest(int arr[],int n) 
{
    int res=-1,Largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[Largest])
        {
            res=Largest;
            Largest=i;
        }
        else if(arr[i]!=arr[Largest])
        {
            if(res==-1 || arr[i]>arr[res])
              res=i;
        }
    }
return res;
}

int main() {
	// your code goes here
	int A[]={12,33,234,34,87};
	int n=sizeof(A)/sizeof(A[0]);
	int secondLargest=Second_largest(A,n);
	cout<<"Second Largest Element in an Array:"<<A[secondLargest]<<endl;
	return 0;
}
