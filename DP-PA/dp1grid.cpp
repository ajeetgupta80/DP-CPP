/*THIS WE ARE GOING TO STUDY AOBUT TOPICS
1. OVERLAPPING SUBPROBLEM   -- FIBONACCI KIND OFF
2. MAXIMIZE/MINIMIZE THE VALUE   -- kind off grid problem
3. FINDING NUMBER OF WAYS 
4. COVERING ALL CASES (DP VS GREEDY)
5. CHECK FOR POSSIBILITY
*/


#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#define nline endl
#define inf (1LL<<60)
using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    #endif 
}

// finding minimum sum path inside a grid------
const int n =3;
const int m=3;
int grid[n][m];
int dp[n][m];


int f(int i, int j)
{
	if(i>=n || j>=m)
	return (int)INFINITY;

    if(i==n-1 && j == m-1)
    	return grid[n-1][m-1];

    if(dp[i][j]!=-1)
    	return dp[i][j];

    return dp[i][j] = grid[i][j]+min(f(i,j+1),f(i+1,j));

}

void solve()
{
	cout<<f(0,0)<<nline;
	
}



                                                              
int main()
{
	

 solve();

}