#include <iostream>
using namespace std;
void movezeros(int arr[], int n)
{
    int nonzero=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[nonzero]);
            nonzero++;
        }
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
    movezeros(arr,7);
    cout<<endl<<"After method call"<<endl;
    printarray(arr,7);

}












//
// Created by 91919 on 16-07-2023.
//
