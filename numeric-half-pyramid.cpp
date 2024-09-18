#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int row=0; row<num; row++){
        // for(int col=0; col<row+1; col++)
            for(int col=0; col<num-row; col++)// inverted
            {
        
            cout<<col+1;

        }
        cout<<endl;
    }
    return 0;
}