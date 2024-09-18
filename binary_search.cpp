#include<iostream>
using namespace std;
int binarySearch(int arr[],int num,int target){
    int s=0;
   int  e=num-1;
   int mid=(s+e)/2;
   while(s<=e){
    if(arr[mid]==target){
        return mid;
    }
    else if(target>arr[mid]){
        s=mid+1;
    }
    else if(target<arr[mid]){
        e=mid-1;
    }
    mid=(s+e)/2;
   }
   return -1;

}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target= 50;
    int n=9;
    int ans= binarySearch(arr,n,target);
    if(ans==-1)
    {
        cout<<"target is not found";
    }
    else{
        cout<<"target is found at"<<" "<<ans;
    }
    return 0;
}