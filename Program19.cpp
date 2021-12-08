/*3. Write a program which accept one number from user and check whether 
9th And 12th bit is on or off.
Input : 2432
Output : TRUE
BOOL ChkBit(UINT iNo)
{
// Logic
}
*/

#include<iostream>
using namespace std;
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
	UINT iMask=0x00000900;
	
	int iResult=iMask&iNo;
	if(iResult==iMask)
	{
		return true;
	}
}
	

int main()
{
	int iValue=0;
	bool bRet=false;
	cout<<"Enter Number\n";
	cin>>iValue;
	
	bRet=ChkBit(iValue);
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
