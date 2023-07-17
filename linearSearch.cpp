#include <iostream>
using namespace std;
int main(){
    int arr[6]={0,10,23,-4,0,5};
    cout<<"Enter element to be searched: ";
    int n;
    cin>>n;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==n)
        {
            cout<<"Element is present at "<<i+1<<"th location.";
        }
    }





}

















//
// Created by 91919 on 12-07-2023.
//
