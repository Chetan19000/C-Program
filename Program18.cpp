/*1.Write a program which accept one number from user and count number of 
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
int CountOne(UINT iNo)
{
// Logic
}*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
	int iCnt=0;
	while(iNo!=0)
	{
		if((iNo&1)==1)
		{
			iCnt++;
		}
		iNo=iNo>>1;
	}
	return iCnt;
}

int main()
{
	UINT iValue=0;
	cout<<"Enter number\n";
	cin>>iValue;
	
	int iRet=CountOne(iValue);
	cout<<"On bits are :"<<iRet;
	return 0;
}

	