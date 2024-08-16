#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n,k;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the size of k"<<endl;
    cin>>k;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(k>n)
    {
        cout<<"The window size cannot be greater than the size of the array:"<<endl;
        return -1;
    }
    int sum=0;
    int max_sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    max_sum=sum;
    for(int i=k;i<n;i++)
    {
        sum=sum+arr[i]-arr[i-k];
        if(sum>max_sum)
        {
            max_sum=sum;
        }
    }
    cout<<"The maximum of subarrays of size"<<k<<"is:"<<max_sum<<endl;
    return 0;
}
