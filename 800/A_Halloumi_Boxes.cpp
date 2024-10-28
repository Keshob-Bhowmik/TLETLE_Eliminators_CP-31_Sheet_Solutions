#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		deque<ll> d(n);
		for (ll i = 0; i < n; i++)
		{
			cin >> d[i];
		}
		ll count = 0;
		for (ll i = 0; i < n - 1; i++)
		{
			if (d[i] > d[i + 1])
			{
				swap(d[i], d[i + 1]);
			}
			else
			{
				count++;
			}
		}
		// for (ll i = 0; i < n; i++)
		// {
		// 	cout << d[i] << " ";
		// }
		if ((k == 1) && (count == (n - 1)))
		{
			cout << "YES" << '\n';
		}
		else if ((k == 1) && (count != (n - 1)))
		{
			cout << "NO" << '\n';
		}
		else
		{
			cout << "YES" << '\n';
		}
	}
}