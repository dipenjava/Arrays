#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<"th element of array: ";
        cin>>arr[i];

    }
    cout<<endl;
    cout<<"your array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Duplicates
    cout<<endl<<"Duplicated in array are: ";

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" "<<endl;

            }

        }
    }
}