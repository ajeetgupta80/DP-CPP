/*THIS WE ARE GOING TO STUDY AOBUT TOPICS
1. OVERLAPPING SUBPROBLEM   -- FIBONACCI KIND OFF
2. MAXIMIZE/MINIMIZE THE VALUE   --
3. FINDING NUMBER OF WAYS
4. COVERING ALL CASES (DP VS GREEDY)
5. CHECK FOR POSSIBILITY
*/


#include<iostream>
#include<bits/stdc++.h>
#define nline endl



using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    #endif 
}

int functionEntered = 0;
int dp[40];

// fibonacci but with dp approach---
int fibo(int n)
{
	functionEntered++;
	if(n==1 || n==2)
	return 1;
   
   if(dp[n]!= -1)
   {
   	return dp[n];
   }
   return dp[n] =fibo(n-1)+fibo(n-2);
}

void solve(int n)
{
	for(int i =0; i<=n; i++)
	{
		dp[i]=-1;
	}
	cout<<fibo(n)<<endl;
	cout<<"funtion recalled = "<<functionEntered<<endl;

}



                                                              
int main()
{
	

	

	init_code();
	int k = 30;
	solve(k);
	cout<<fibo(k)<<endl;

}