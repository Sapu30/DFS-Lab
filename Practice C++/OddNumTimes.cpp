#include<bits/stdc++.h>
using namespace std;

//Find the Number Occurring Odd Number of Times
int OddNumTimes(int arr[], int n)
{
    for (int i = 0; i < n; i++) 
    {
		int count = 0;
		
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
        //if number is odd
		if (count % 2 != 0)
			return arr[i];
	}
	return -1;
}

//Driver code
int main()
{
    int arr[] = {3, 2, 1, 2, 3, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<OddNumTimes(arr,n);

    return 0;
}