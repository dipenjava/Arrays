#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cout<<"Enter size of array: ";
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"  element of array is :"<<arr[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of elements of array is: "<<sum<<endl;






}








//
// Created by 91919 on 11-07-2023.
//
