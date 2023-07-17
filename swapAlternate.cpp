#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,5,6,7,9,8,};
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<6;i=i+2)
    {
        if(i+1<6)
        {
            swap(arr[i],arr[i+1]);

        }



    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }





}






















//
// Created by 91919 on 12-07-2023.
//
