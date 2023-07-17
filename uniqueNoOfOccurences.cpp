/*
 jese arr={10,20,20,30,30,30,40,40,40,40};
 isme
 10--->1
 20--->2
 30--->3
 40--->4
 */
#include <iostream>
using namespace std;
int frequency(int arr[], int size){
    bool check[size];
    for(int i=0;i<size;i++){
        check[i] = 0;
    }
    for(int i=0; i<size; i++){
        if(check[i]== 1){
            continue;
        }
        int count = 1;
        for(int j = i+1; j<size; j++){
            if (arr[i] == arr[j]){
                check[j] = 1;
                count++;
            }
        }
        cout<<"frequency of "<<arr[i]<<" is: " << count << endl;




    }

}
int main(){
    int arr[] = {1, 2, 3, 1, 2, 3};
    //calculate the size of an array
    int size = sizeof(arr) / sizeof(arr[0]);
    //call function to calculate the frequency
    frequency(arr, size);
    return 0;
}



//
// Created by 91919 on 12-07-2023.
//
