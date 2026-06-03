#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='A';j<='A'+i;j++)
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