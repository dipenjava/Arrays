#include <iostream>
using namespace std;
int getPivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e)
    {
        if(arr[mid]>arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}
int binarySearch(int arr[],int s,int e,int key)
{
    int start=s;
    int end= e;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;

        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return mid;
}



int main()
{
    int arr[6]={4,9,11,0,1,2};
    int key=11;
    int pivot =getPivot(arr,6);
    cout<<pivot<<endl;
    if(key>=arr[pivot] && key<=arr[5])
    {
        // IN LINE 2
        cout<<binarySearch(arr,pivot,5,key);

    }
    else
    {
        cout<<binarySearch(arr,0,pivot-1,key);
    }



}















//
// Created by 91919 on 14-07-2023.
//
