#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, l;
	cin >> n >> l;

	vector<int> v(n);

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	sort(v.begin(), v.end());


	for (int i = 0; i < n; ++i)
	{
		if (l >= v[i])
		{
			l++;
		}
		else
			break;
	}
	cout << l;
	return 0;
}