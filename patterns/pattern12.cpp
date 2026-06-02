#include<bits/stdc++.h>
using namespace std;
void pattern( int n )
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        
        for(int j=1;j<=(2*n)-2*i;j++)
        {
            cout<<" ";
        }

         for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int N;
    cout<<" Enter the value of N : ";
    cin>>N;
    pattern(N);
    return 0;
}