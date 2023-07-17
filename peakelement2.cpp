#include <iostream>
using namespace std;
int peak(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
         mid=s+(e-s)/2;

    }
    return mid;
}



int main()
{
    int arr[11] = {2, 5, 8, 10, 101, 99, 85, 75, 65, 55, 44};

    cout<<peak(arr,11)<<endl;





}















//
// Created by 91919 on 13-07-2023.
//
