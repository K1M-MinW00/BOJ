#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

unsigned long long bin(long long n)
{
	unsigned long long left = 0, right = n, mid;
	unsigned long long answer = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if ((mid * (mid + 1)) <= 2*n)
		{
			left = mid + 1;
			answer = max(mid, answer);
		}

		else
			right = mid - 1;
	}
	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--)
	{
		unsigned long long n;
		cin >> n;

		cout << bin(n) << '\n';
	}


	return 0;
}