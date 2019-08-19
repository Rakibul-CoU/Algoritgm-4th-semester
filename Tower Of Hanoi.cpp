#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
void TOH(int n,char Sour, char Aux,char Des)
{
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
		return;
	}

	TOH(n-1,Sour,Des,Aux);
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
	TOH(n-1,Aux,Sour,Des);
}

int main()
{
	int n;
	cout<<"Enter no. of disks:";
	cin>>n;
	TOH(n,'A','B','C');

	return 0;
}
