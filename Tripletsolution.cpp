#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int s=12;
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            for(int k=j+1;k<7;k++)
            {
                if(arr[i]+arr[j]+arr[k]==s)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }






}












/*
 * sum of any three element of array should be 12
 */
//
// Created by 91919 on 12-07-2023.
//
