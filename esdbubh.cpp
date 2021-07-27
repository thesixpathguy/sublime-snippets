		#include<bits/stdc++.h>

		using namespace std;

		#define lint            		 long long 
		#define setbits(x)      		__builtin_popcountll(x)
		#define zrbits(x)     			__builtin_ctzll(x)
		#define zlbits(x)				__builtin_clzll(x)
		#define parsbits(x)				__builtin_parityll(x)
		#define mem(a, b)       		memset(a, (b), sizeof(a))
		#define MOD             		1000000007
		#define inf             		1e17 
		#define neginf          		-1e17 
		#define sp(x,y)         		fixed<<setprecision(x)<<y
		#define testcase(t)     		lint t; cin>>t; while(t--)
		#define power(a,b)      		(double)pow((double)a,(double)b)
		#define FOR(i,n)        		for(lint i=0;i<n;i++)
		#define gcd(a,b)				__gcd(a,b)
		#define PI              		3.1415926535
		#define pb              		push_back
		#define ss         				second
		#define ff          			first
		#define umap					unordered_map			
		#define ummap					unordered_multimap
		#define uset   					unordered_set
		#define umset					unordered_multiset

		//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());//use for shuffling array
		 
		typedef unsigned long long   ull;

		 
		void c_p_c()
		{
		    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		#ifndef ONLINE_JUDGE
		    freopen("input1.txt", "r", stdin);
		    freopen("output1.txt", "w", stdout);
		#endif
		}

		lint me(lint x, lint y, lint p)  
		{  
	    	lint res = 1;     
	  
	    	x = x % p; 
	   
	    	if (x == 0) return 0; 
	  
	    	while (y > 0)  
	    	{  
	        
	        	if (y & 1)  
	            res = (res*x) % p;  
	  
	          
	        	y = y>>1;  
	        	x = (x*x) % p;  
	    	}  
	    	return res;  
		}

	/*-------------------------------------------SOLUTION--------------------------------------------------*/

		void solve()
		{
			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
			


		}


		int main()
		{
			c_p_c();
			lint flg99=0;
			if(flg99==1){
			testcase(t)
			{
				solve();
			}}
			else
			{
				solve();
			}
			return 0;
		
		}
			
		
			

		    

		    

