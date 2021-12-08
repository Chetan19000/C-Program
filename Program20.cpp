/*4. Write a program which accept one number , two positions from user and 
check whether bit at first or bit at second position is ON or OFF.
Input : 12 3 7
Output : TRUE

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
// Logic
}*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(int iNo,int iPos1,int iPos2)
{
	UINT iMask1=0x00000001;
	UINT iMask2=0x00000001;
	
	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	
	UINT iResult1=iMask1&iNo;
	UINT iResult2=iMask2&iNo;
	
	if((iResult1==iMask1)||(iResult2==iMask2))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main() 
{
	UINT iValue=0,iPos1=0,iPos2=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	cout<<"Enter first position\n";
	cin>>iPos1;
	
	cout<<"Enter Second Position\n";
	cin>>iPos2;
	
	bool bRet=ChkBit(iValue,iPos1,iPos2);
	if(bRet==true)
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}
	return 0;
}