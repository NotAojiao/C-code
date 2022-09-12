#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int arr[100];
	int i = 0;
	int j = 0;
	while(i < 100)
	{



		arr[i] = j;
		i++;
		j++;
		


	}
	for(int n = 0;n < 100;n++)
	{
		cout << arr[n] << endl;
	}

	int start = 0;
	int end = 99;
	/*cout << end;*/
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++, end--;
	}
	for (int n = 0; n < 100; n++)
		cout << arr[n] << endl;
	return 0;
}
