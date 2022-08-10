#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(x) (x).begin(), (x).end()
#define inf 1000000007
#define pi 3.141592653589793238462643383279502884197169399
#define llmax LLONG_MAX 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n=100;
	vector <pair<int,int>> v; 
	for(int i=0; i<n; i++)
	{
		int x = rand()%100;
		v.push_back({x,i});
	}
    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<" ";
    }
    cout<<'\n';
	int m; cin>>m;
	int targ[m];
	for(int i=0; i<m; i++)
	{
		cin>>targ[i];
	}
	sort(all(v));
	for(int i=0; i<m; i++)
	{
		int sum1=0;
		int p1=0, p2=n-1;
		vector <pair<int,int>> ans;
		while(p1<p2)
		{
			sum1=v[p1].first+v[p2].first;
			if(sum1==targ[i])
			{
				ans.push_back({min(v[p1].second,v[p2].second),max(v[p1].second,v[p2].second)});
				p1++;
                p2--;
			}
			else if(sum1<targ[i])
			{
				p1++;
			}
			else
			{
				p2--;
			}
		}
		if(ans.size()==0)
		{
			cout<<0<<'\n';
		}
		else
		{
			sort(all(ans));
			cout<<ans[0].first<<" "<<ans[0].second<<'\n';
		}
	}
	
}