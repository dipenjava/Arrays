#include <iostream>
using namespace std;
void rotatearray( int arr[] ,int n,int k)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[(i+k)%n]=temp[i];
    }


}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}


int main()
{
    int arr[7]={10,25,0,4,0,0,5};
    printarray(arr,7);
    rotatearray(arr,7,2);
    cout<<endl<<"After method call"<<endl;
    printarray(arr,7);

}

















//
// Created by 91919 on 16-07-2023.
//
