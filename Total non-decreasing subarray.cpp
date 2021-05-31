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
	         if(a[i-1]<=a[i])  // if ith element is greator or equal to its previous element then total non-decreasing subarrays t[i] will be t[i]+=t[i-1]
	           t[i]+=t[i-1];   // else total subarrays will be non decreasing subarray will be 1 . ie. subarray cointaining that array itself.
	         x+=t[i];          // If we dont want we do not require extra t[n] array because only one previous elements value is required.
	     }
	   cout<<x+1<<endl;
	}
	return 0;
}

// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
