#include <iostream>
using namespace std;
int getpivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
{
            s=mid+1;
}
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return mid;

}
int main()
{
    int arr[7]={1,3,4,10,12,15,0};
    cout<<getpivot(arr,7)<<endl;




}

















//
// Created by 91919 on 14-07-2023.
//
