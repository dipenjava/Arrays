#include <iostream>
using namespace std;
void reverseArray(int arr[],int size)
{

    int start=0;
    int end = size -1;
    while(end>=start)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;


    }


}





int main()
{
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    cout<<"Elements of array is: ";
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    reverseArray(arr,size);
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }





}






//
// Created by 91919 on 12-07-2023.
//
