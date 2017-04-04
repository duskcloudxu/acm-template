#include<cstdio>
#include<iostream>
#include<cmath>
#include<stack>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<queue>
#include <functional>
#include<map>
#include<iomanip>
#include<set>
#include <utility>
#include<queue>
#include<bitset>
#define ll long long
#define maxn 200002
#define lson l , m , rt << 1
#define rson m + 1 , r , rt << 1 | 1
const int mod = 1000000007;
const double pi = acos(-1);
const double eps = 1e-9;
const int inf = 1e9;
using namespace std;
int n, k,cnt,ans;
double m,a[101][101];
int main()
{
	while (~scanf("%d%lf%d",&n,&m,&k))
	{
		ans = 0;
		for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)scanf("%lf",&a[i][j]);
		for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)
           if(a[i][j]<m&&i!=j)
		   {
			   cnt = 0;
			   for (int k = 0; k < n; k++)
			   {
				   if (a[i][k]>=m&& a[j][k]>=m)cnt++;
			   }
			   if (cnt >= k)
			   {   
				   a[i][j]=a[j][i]= inf;
				   ans++;
			   }
		   } 
		printf("%d\n", ans);
	}
	return 0;
}
