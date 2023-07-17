#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort012(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j],arr[i]);
            }
        }
    }
}

int main()
{

    int arr[8]={0,1,0,1,0,2,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    sort012(arr,n);
    cout<<"Array after sorting is: ";
    printArray(arr,n);





}

















//
// Created by 91919 on 13-07-2023.
//
