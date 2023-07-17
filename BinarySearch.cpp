#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    //not using mid=start+end/2   TO AVOID INTEGER OVERFLOW
    //COMPLEXITY O(logN)
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}



int main()
{
    int ODDarr[7]={0,15,88,89,887,999,9896};
   int EVENarr[8]={11,12,15,85,95,99,101,155};
    cout<<"index for 999 is: "<<binarySearch(ODDarr,7,999)<<endl;
    cout<<"index for 85 is: "<<binarySearch(EVENarr,8,85)<<endl;
}















//
// Created by 91919 on 13-07-2023.
//
