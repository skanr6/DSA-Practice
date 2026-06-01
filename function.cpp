//function problem
#include<bits/stdc++.h>
using namespace std;
void reverse(int brr[],int s)
{
    int crr[s];
    for(int i=0;i<s;i++)
    {
        crr[i]=brr[s-i-1];
    }
    
    for(int i=0;i<s;i++)
    {
        cout<<crr[i]<<"\n";
    }

}
int main()
{
    int n;
    cout<<" Enter the number of elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" Original array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<endl;
    cout<<" Reversed array : "<<endl;
    reverse(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
