#include<iostream>
using namespace std;
int bin(int a[],int n,int key)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(e+s)/2;
        if(a[mid]==key)
        return mid;
        else if(a[mid]>key)
        e=mid-1;
        else
        s=mid+1;
    }
    return -1;
}
int main()
{
    int n=0,key=0;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>key;
    int c=bin(a,n,key);
    cout<<c;

}