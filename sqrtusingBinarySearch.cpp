#include <iostream>
using namespace std;
 int squareroot(int n)
{
    int s=0;
    int e= n-1;
    int mid=s + (e-s)/2;
     int ans=-1;

    while(s<=e)
    {
         int squ = mid*mid;
        if(squ == n)
        {
            return mid;
        }
        if(squ>n)
        {
            e=mid-1;

        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s + (e-s)/2;


    }
    return ans;
}
double permanent(int n,int precise, int temp)
{
    double factor=1;
    double ans=temp;
    for(int i=0;i<precise;i++)
    {
        factor=factor/10;

        for(double j=ans;j<j*n;j= j+factor)
        {
            ans=j;
        }
    }
    return ans;

}


int main()
{
    cout<<"Square root of 36 is: "<<squareroot(36)<<endl;
    int temp=squareroot(36);
    cout<<"Permanenet solution is: "<<permanent(36,3/*kha tak precise hona chaiye*/,temp);

}















//
// Created by 91919 on 14-07-2023.
//
