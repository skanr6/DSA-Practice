#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            for(int j=1;j<=2*n-2*i;j++)
            {
                cout<<"  ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            for(int j=1;j<=2*n-i;j++)
            {
                cout<<"* ";
            }
            for(int j=1;j<=2*i-2*n;j++)
            {
                cout<<"  ";
            }
            for(int j=1;j<=2*n-i;j++)
            {
                cout<<"* ";
            }
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
