#include <iostream>
using namespace std;
int firstOccurence(int arr[],int n,int key)
{
    int ans=-1;
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main()
{
    int arr[7]={1,2,3,5,3,8,9};
    cout<<"First occurenece of 3 is at index: "<<firstOccurence(arr,7,3);

}


















//
// Created by 91919 on 13-07-2023.
//
