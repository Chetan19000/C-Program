/*Write a program which accept one number from user and range of 
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
// Logic
}*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
	UINT iMask=0x00000001;
	UINT iMask2=0x0000001;

	iMask=iMask<<iStart;
	iMask2=iMask2<<(iEnd-1);
	while(iMask!=iMask2)
	{
		iNo=iMask^iNo;
		iMask=iMask<<1;
	}
	return iNo;
}

int main()
{
	UINT iValue=0,iPos1=0,iPos2=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	cout<<"Enter first position\n";
	cin>>iPos1;
	
	cout<<"Enter Last Position\n";
	cin>>iPos2;
	
	UINT iRet=ToggleBitRange(iValue,iPos1,iPos2);
	cout<<"Toggle Number is :"<<iRet;
	return 0;
}