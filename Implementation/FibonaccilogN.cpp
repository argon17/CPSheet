#include <bits/stdc++.h>
using namespace std;
 
const int hell = 1000000007;
 
void multiply(long m1[2][2], long m2[2][2])
{
    long ans[2][2] = {0, 0, 0, 0};
    for(int i=0; i<2; ++i){
         for(int j=0; j<2; ++j){
               for(int k=0; k<2; ++k){
                     ans[i][k]+=(m1[i][j] * m2[j][k])%hell;
                     ans[i][k] %= hell;
               }
          }
     }
     for(int i=0; i<2; ++i)
           for(int j=0; j<2; ++j)
                 m1[i][j] = ans[i][j];
}
 
void powmatn(long mat[2][2], long n)
{
    if (n < 2) return;
    long ans[2][2] = {1, 0, 0, 1};
    while (n)
    {
        if (n & 1) multiply(ans, mat), --n;
        else multiply(mat, mat), n >>= 1;
    }
    for(int i=0; i<2; ++i)
           for(int j=0; j<2; ++j)
                 mat[i][j] = ans[i][j];
}
 
int solve(int n)
{
    long mat[2][2] = {0, 1, 1, 1};
    powmatn(mat, n);
    return mat[1][0];
}
 
