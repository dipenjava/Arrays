#include <iostream>
using namespace std;
int findmax(int arr[],int n)
{
    int max= INT_MIN;
    for(int i=0;i<n;i++)
    { if (arr[i]>max)
        max=arr[i];


    }
    return max;
}
int findmin(int arr[],int n)
{
    int min=INT_MAX;
    for(int i =0;i<=n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }



    }
    return min;



}
int main()
{
    int n;
    cout<<"Ente size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<< i+1 <<" element: ";
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    cout<<"Maximum element is: "<<findmax(arr, n)<<endl;
    cout<<"Minimum element is: "<<findmin(arr, n)<<endl;





}












//
// Created by 91919 on 11-07-2023.
//
