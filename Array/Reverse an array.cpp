#include <iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

int main() {
	// your code goes here
	int A[]={12,34,54,8,32,8,43};
	int n=sizeof(A)/sizeof(A[0]);
	reverse(A,n);
	for(int i=0;i<n;i++)
	{
	    cout<<A[i]<<" ";
	}
	return 0;
}
