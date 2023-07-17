#include <iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,2,3,4};
    int arr2[]={1,2,3,7};
    int i=0;
    int j=0;
    while(i<5 && j<4)
    {
        if(arr1[i]==arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

}













//
// Created by 91919 on 12-07-2023.
//
