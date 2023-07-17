#include <iostream>
using namespace std;
void sorted(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        while(arr[i]==0 )
        {
            i++;
        }
        while(arr[j]==1 )
        {
            j--;
        }

            swap(arr[i],arr[j]);
            i++;
            j--;


    }
}
void printArray(int arr[],int n)
{
    cout<<"Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    printArray(arr,n);
    sorted(arr,n);
    printArray(arr,n);








}












/*
 if array is:
 0 1 0 1 1 0 0
 then resultant array should be:
 0 0 0 0 1 1 1
 */
//
// Created by 91919 on 13-07-2023.
//
