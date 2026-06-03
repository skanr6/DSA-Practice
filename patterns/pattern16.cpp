#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{   char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch='A'+i+1;
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