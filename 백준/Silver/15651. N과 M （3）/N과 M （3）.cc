#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;
int a[8];
bool visited[8];
vector<vector<int>> answer;

void solve(vector<int> v)
{
	if (v.size() == m)
	{
		answer.push_back(v);
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		v.push_back(a[i]);
		solve(v);
		v.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
		a[i - 1] = i;

	vector<int> temp;
	solve(temp);

	sort(answer.begin(), answer.end());

	for (auto v : answer)
	{
		for (int i = 0; i < m; ++i)
			cout << v[i] << ' ';
		cout << '\n';
	}

	return 0;
}
