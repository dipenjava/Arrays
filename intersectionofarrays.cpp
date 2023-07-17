#include<iostream>
using namespace std;
int main()
{
    int arr1[] ={1,2,3,3};
    int arr2[] = { 2,3};
    for(int i=0;i<4;i++)
    {
        int element= arr1[i];
        for(int j=0;j<2;j++)
        {
            if(element==arr2[j])
            {
                cout<<element<<" ";
                arr2[j]=INT_MIN;
                break;

            }
        }
    }

}










//
// Created by 91919 on 12-07-2023.
//
