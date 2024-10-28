#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, x;
		cin >> n >> x;
		vector<ll> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		ll mid_distance = INT_MIN;
		for (int i = n - 1; i != 0; i--)
		{
			if ((v[i] - v[i - 1]) >= mid_distance)
			{
				mid_distance = v[i] - v[i - 1];
			}
		}
		if (n == 1)
		{
			ll last_distance = 2 * (x - v[0]);
			cout << max(v[0], last_distance) << '\n';
		}
		else
		{
			ll first_distance = v[n - 1] - v[n - 2];
			ll last_distance = 2 * (x - v[n - 1]);
			cout << max({first_distance, last_distance, v[0], mid_distance}) << '\n';
		}
	}
}