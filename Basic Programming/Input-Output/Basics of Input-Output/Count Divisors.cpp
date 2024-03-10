// Question
// https://www.hackerearth.com/problem/algorithm/count-divisors/?source=list_view

// Explanation:
// iterate from l till r, both inclusive
// if any number in loop is divisble by k, increment the count
// output the count

// Solution:
#include <iostream>
using namespace std;
int main() {
	int l, r, k;
	cin >> l >> r >> k;
	int count  = 0;
	for(int i = l; i <= r; i++)
	{
		if(i%k==0)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
