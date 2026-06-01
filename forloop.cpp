//forloop problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int low,high,i,sum=0;
    cout<<" Enter the lower value : ";
    cin>>low;
    cout<<" Enter the higher value : ";
    cin>>high;
    for(i=low;i<=high;i++)
    {   
        sum=sum+i;
    }
    cout<<" The sum of "<<low<<" and "<<high<<" is : "<<sum;
    return 0;
}