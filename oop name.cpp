#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=7; i++)
    {
        for(int j=1; j<=12; j++)
        {
            if(i==1 || i==7 || j==1 || j==12)
                cout<<"*";
            else if(i==4 && j==3)
                cout<<"M";
            else if(i==4 && j==4)
                cout<<"A";
            else if(i==4 && j==5)
                cout<<"I";
            else if(i==4 && j==6)
                cout<<"M";
            else if(i==4 && j==7)
                cout<<"O";
            else if(i==4 && j==8)
                cout<<"O";
            else if(i==4 && j==9)
                cout<<"N";
            else if(i==4 && j==10)
                cout<<"A";
            else
                cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}
