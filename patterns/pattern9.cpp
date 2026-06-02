#include<bits/stdc++.h>
using namespace std;

//upper triangle
void pattern7(int n)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
       cout<<" ";
    }
    for(int k=0;k<2*i+1;k++)
    {
        cout<<"*";
    }
    for(int l=0;l<n-i-1;l++)
    {
       cout<<" ";
    }
    cout<<endl;
}}

//lower triangle
void pattern8(int n)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<i;j++)
    {
       cout<<" ";
    }
    for(int k=0;k<2*n-(2*i+1);k++)
    {
        cout<<"*";
    }
    for(int j=0;j<i;j++)
    {
       cout<<" ";
    }
    cout<<endl;
}}
int main()
{
    int N;
    cout<<" Enter the value of N : ";
    cin>>N;
    pattern7(N);
    pattern8(N);
    return 0;
}