// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Function to find minimum number of lines
int minimumLines(vector<vector<int> >& arr)
{
	int n = arr.size();

	// Base case when there is only one point,
	// then min lines = 0
	if (n == 1)
		return 0;

	// Sorting in ascending order of X coordinate
	sort(arr.begin(), arr.end());

	int numoflines = 1;

	// Traverse through points and check
	// whether the slopes matches or not.
	// If they does not match
	// increment the count of lines
	for (int i = 2; i < n; i++) {
		int x1 = arr[i][0];
		int x2 = arr[i - 1][0];
		int x3 = arr[i - 2][0];
		int y1 = arr[i][1];
		int y2 = arr[i - 1][1];
		int y3 = arr[i - 2][1];
		int slope1 = (y3 - y2) * (x2 - x1);
		int slope2 = (y2 - y1) * (x3 - x2);

		if (slope1 != slope2)
			numoflines++;
	}

	// Return the num of lines
	return numoflines;
}

// Driver Code
int main()
{
	vector<vector<int> > vect{ { 8,2 }, { 1,4 }, { 2,3 }, { 2,1 }, { 3,2 }, { 4,1 }, { 5,0 }, { 4,3 } ,{5,4}};

	// Function call
	cout << minimumLines(vect);
	return 0;
}
