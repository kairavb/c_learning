#include <stdio.h>

// implementation of binary search algorithm
 
int arr[1000000];

// algorithm
int binary(int x, int start, int end)
{
	if (x > arr[end] || x < arr[start])
		return -1;

	int mid = (start + end) / 2;

	if (x == arr[mid])
		return mid;
	else if (x > arr[mid])
		return binary(x, mid, end);
	else
		return binary(x, start, mid);
}

int main()
{	
	int start = 50;
	for (int i = 0; i < 1000000; i++)
		arr[i] = i + start;

	int ch;
	printf("what to search?: ");
	scanf("%d", &ch);

	int len = sizeof(arr) / sizeof(arr[0]);
	int ans = binary(ch, 0 , len -1);

	printf("answer is: %d\n", ans);

	return 0;
}

