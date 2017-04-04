#include<bits/stdc++.h>
using namespace std;
#define random(a,b) ((a)+rand()%((b)-(a)+1))
int main()
{
	double a[105][105];
	memset(a,0,sizeof a);

		int n,m,k;
		
		n=6;
		m=5;
		k=1;
	

		cout<<6<<" "<<m<<" "<<k<<endl;
			for(int i=0;i<n;i++)
			for(int j=i;j<n;j++)
			{
				a[i][j]=0;
			}
		a[4-1][6-1]=a[6-1][4-1]=6.0;
		a[5-1][6-1]=a[6-1][5-1]=6.0;
		a[3-1][5-1]=a[5-1][3-1]=6.0;
		a[2-1][4-1]=a[4-1][2-1]=6.0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			printf("%.1f ",a[i][j]);
     		cout<<endl;
		}

}


