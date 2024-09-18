#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int row=0;row<num;row++)
    {
        //  for(int col=0; col<num-row;col++)
        for(int col=0; col<row;col++)//inverted
         {
            cout<<"  ";
         }
            // for(int star=0;star<2*row+1;star++)
            for(int star=0;star<2*num-2*row-1;star++) //inverted
            {
                cout<<"* ";
            }
           
         cout<<endl;

         }
    
    return 0;
}