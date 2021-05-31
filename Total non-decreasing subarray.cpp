#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{  int n;
	   cin>>n;
	   long long a[n],t[n];
	   for(int i=0;i<n;++i)
	     cin>>a[i];
	   t[0]=1;
	   long long x=0;
	   for(int i=1;i<n;++i)// t[i]: Total non_decreasing subarrays ending with ith element
	     {   t[i]=1;
	         if(a[i-1]<=a[i])
	           t[i]+=t[i-1];
	         x+=t[i];
	     }
	   cout<<x+1<<endl;
	}
	return 0;
}

// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
