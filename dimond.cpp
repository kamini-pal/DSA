#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    int num = number/2;
    // int num;
    // cin>>num;
    for ( int i = 0; i <num; i++)
    {
        for(int j=0; j<num-i-1; j++)
        {
            cout<<" ";
        }
        for(int k=0; k<i+1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        for(int k=0; k<num-i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}