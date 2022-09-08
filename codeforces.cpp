#include<iostream>
#include<bits/stdc++.h>
// #include<c.math>
#include<conio.h>
#include<stdlib.h>
// typedef long long ll;
#include<vector>

// #include<math>
// #include <boost/math/common_factor.hpp>




using namespace std;

// int Lcm(int n1, int n2)
// {
//     int max;
//        max = (n1 > n2) ? n1 : n2;

//     do
//     {
//         if (max % n1 == 0 && max % n2 == 0)
//         {
//             break;
//         }
//         else
//             ++max;
//     } while (true);

//     return max;
// }

// void rotatematrix(vector<vector<int>>& m)
// {
//     int n = m.size();
//     for(int i =0 ; i<n; i++)
//     {
//         for(int j =0; j<i; j++)
//         {
//             swap(m[i][j],m[j][i]);
//         }
//     }

//     for(int i =0; i<n; i++)
//     {
//         reverse(m[i].begin(),m[i].end());
//     }
// }

 vector<vector<int>> merge(vector<vector<int>>& arr) {
    vector<vector<int>> ans;
    if(arr.size()==0)
    {
        return ans;
    }
    sort(arr.begin(), arr.end());
    vector<int> temp = arr[0];

    for(auto it: arr)
    {
        if(it[0] < = temp[1])
        {
            temp[1]=max(it[1], temp[1]);
        }
        else
        {
            ans.push_back(temp);
            temp = it;
        }
    }
    ans.push_back(temp);
    return ans;

    
        
    }



int main()
{
    // int tt;
    // cin>>tt;
    // while(tt--)
    // {
    //     int n;
    //     cin>>n;
    //     int count =0;
    //     for(int i=1; i<=n; i++ )
    //     {
    //         for(int j =1; j<=n; j++)
    //         {
    //             int x =  Lcm(i,j) /__gcd(i,j);
    //             if(x<=3)
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    //     cout<<count<<endl;
    // }


// vector<vector<int>> grid = 
// rotatematrix()

   int n;
   cin>>n;
   vector<int>read(7);
   for(int i=0; i<n; i++)
   {
    cin>>read[i];
   }
   int i=0;
   while(n>0)
   {
    n-=read[i];
    if(n<=0)
    {
        break;
    }
    i++;
    i=i%7;


   }
   cout<<i+1;
   return 0;




}