#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    vector<int> v={3,6,7,4,8,1,2,5};
    sort(v.begin(),v.end(),greater<int>());
    for(auto x:v)
    cout<<x<<" ";
    return 0;
}