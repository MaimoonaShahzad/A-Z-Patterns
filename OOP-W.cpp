#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=9;j++)
		{
		if((i==1&&j==1)||(i==1&&j==5)||(i==1&&j==9)||(i==2&&j==2)||(i==2&&j==4)||(i==2&&j==6)||(i==2&&j==8)||(i==3&&j==3)||(i==3&&j==7))
		cout<<"*";
		else
		cout<<" ";
	    }
	cout<<endl;
}
	return 0;
}
