// C++ program to print largest contiguous array sum

#include <climits>
#include <iostream>
using namespace std;

void maxSubArraySum(int a[], int size)
{
	int max_sum = INT_MIN, max_ending = 0,
		start = 0, end = 0, s = 0;

	for (int i = 0; i < size; i++) {
		max_ending += a[i];

		if (max_sum < max_ending) {
			max_sum = max_ending;
			start = s;
			end = i;
		}

		if (max_ending < 0) {
			max_ending = 0;
			s = i + 1;
		}
	}
	cout << "Maximum contiguous sum is " << max_sum<< endl;
	cout << "Starting index " << start << endl<< "Ending index " << end << endl;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
	int n = sizeof(a) / sizeof(a[0]);
	maxSubArraySum(a, n);
	return 0;
}
