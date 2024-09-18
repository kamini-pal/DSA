#include<iostream>
using namespace std;
int firstOccurance(int arr[],int num,int target){
    int s=0;
    int e=num-1;
    int mid=(e+s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target)
        {
        ans =mid;
        mid=e-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=(e+s)/2;
    }
    return ans;

}


int lastOccurance(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
        ans=mid;
         mid=s+1; 
          }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main()
{
    int arr[]={10,20,30, 30, 30, 40, 50};
    int target=30;
    int n=7;
    int answer= firstOccurance(arr,n,target);
    // int answer= lastOccurance(arr, n, target);
    if(answer==-1){
        cout<<"target is not found";
    }
    else{
        cout<<"target is found at"<<" "<<answer;
    }
    return 0;
}