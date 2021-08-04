#include <bits/stdc++.h>
using namespace std;

const int hell = 1000000007;

void multiply(long m1[2][2], long m2[2][2])
{
    long a = ((m1[0][0] * m2[0][0]) % hell + (m1[0][1] * m2[1][0]) % hell) % hell;
    long b = ((m1[0][0] * m2[0][1]) % hell + (m1[0][1] * m2[1][1]) % hell) % hell;
    long c = ((m1[1][0] * m2[0][0]) % hell + (m1[1][1] * m2[1][0]) % hell) % hell;
    long d = ((m1[1][0] * m2[0][1]) % hell + (m1[1][1] * m2[1][1]) % hell) % hell;
    m1[0][0] = a, m1[0][1] = b;
    m1[1][0] = c, m1[1][1] = d;
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
    mat[0][0] = ans[0][0], mat[0][1] = ans[0][1];
    mat[1][0] = ans[1][0], mat[1][1] = ans[1][1];
}

int solve(int n)
{
    long mat[2][2] = {1, 1, 1, 0};
    powmatn(mat, n - 1);
    return mat[0][0];
}
