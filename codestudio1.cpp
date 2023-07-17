/*
 In an array all the elements occur twice except one, find that elements
 eg: arr[7]={1,9,1,8,7,8,9}
 1-->2
 9--->2
 8--->2
 7--->1
 print 7
 */
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,9,1,8,7,8,9};
    int ans=0;
    cout<<"array is: ";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
        ans=ans^arr[i];
    }
    cout<<endl;
    cout<<"unique element: "<<ans;





}











//
// Created by 91919 on 12-07-2023.
//
