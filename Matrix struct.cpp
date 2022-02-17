#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int p=1e9+7;  /// mod
const int nmax=2;

struct Matrix{

    ll r,c;
    ll m[nmax][nmax];
    Matrix(ll _r, ll _c)   /// constructor
    {
        r=_r;
        c=_c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                m[i][j]=0;
            }
        }
    }

    Matrix operator*(Matrix other)
    {
        Matrix prod(r,other.c);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                for(int k=0;k<other.c;k++)
                {
                    prod.m[i][k]+=m[i][j]*other.m[j][k];
                    prod.m[i][k]%=p;
                }
            }
        }
        return prod;
    }

    Matrix pow(ll q)
    {
        if(q==0)
        {
            Matrix I(r,c);
            for(int i=0;i<r;i++)
            {
                I.m[i][i]=1;
            }
            return I;
        }
        Matrix square= (*this) * (*this);
        Matrix result= square.pow(q/2);
        if(q%2==1)
        {
            result=result*(*this);
        }
        return result;
    }
};


int main()
{
    ll n;
    cin>>n;
    Matrix Fo(2,1);
    Fo.m[1][0]=1;
    Matrix M(2,2);

    M.m[0][0] = 0; M.m[0][1] = 1;
    M.m[1][0] = 1; M.m[1][1] = 1;

    Matrix Fn = M.pow(n) * Fo;
    cout<<Fn.m[0][0]<<" ";
}

