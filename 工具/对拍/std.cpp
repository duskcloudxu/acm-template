#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    double m;
    while(scanf("%d%lf%d",&n,&m,&k)!=EOF)
    {
    	double a[105][105];
    	for(int i=0;i<n;++i)
    		for(int j=0;j<n;++j)
    			scanf("%lf",&a[i][j]);
    	int sum=0,z;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                int ans=0;
                if(i!=j&&a[i][j]<m)
                {
                    for(z=0;z<n;++z)
                    {
                        if(a[i][z]>=m&&a[j][z]>=m)
                            ans++;
                    }
                    if(ans>=k)
                    {
                        a[i][j]=a[j][i]=m;
                        sum++;
                        i=-1;
                        break;
                    }
                }
          

            }
        }
        printf("%d\n",sum);
	}
    return 0;
}
