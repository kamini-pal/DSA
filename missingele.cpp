#include<iostream>
using namespace std;
int missingEle(int arr[], int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=(s+e)/2;
    while(s<=e){
        int diff= arr[mid]-mid;
        if(diff==1){
            mid= s+1;
        }
        else{
            ans =mid;
            mid= e-1;
        }
        mid= (s+e)/2;
    }
    if(ans+1==0)
    return n+1;
    return ans+1;
}

int main()
{
    int arr[]={1,2,3,5,6,7,8,9};
    int n=8;
    int result= missingEle(arr,n);
    cout<<"missing element is "<<" "<<result;
    return 0;
}