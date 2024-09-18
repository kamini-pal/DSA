#include<iostream>
using namespace std;

int main()
{
    int num; 
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
        //  if(row==num-1|| col==0||col==row)
        if(row==0||col==0||col==num-row-1) // inverted
         {
         cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
    }
    return 0;
}