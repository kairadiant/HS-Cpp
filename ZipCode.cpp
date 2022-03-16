#include "ZipCode.h"
#include<iostream>
#include <string>

//Kayla Washington
using namespace std;


void ZipCode::barToDigit(string bar) //to convert bar to digit
{
	if(bar.length()==5)
	{
		digit=-1;
		for(int dig=0;dig<10;dig++)
		{
			hold=num[dig];
			if(bar==hold)
			{
				digit=dig;
			}
		}
		cout<<digit;
	}
	else
	{
		cout<<"Error";
	}
	cout<<endl;
}
void ZipCode::digitToBar(int digit)  //to convert digit to barcode
{
	if(digit/10<1)
	{
		for(int dig=0;dig<10;dig++)
		{
			hold=num[dig];
			if(dig==digit)
			{
				cout<<hold;
			}
		}
	}
	else
	{
		cout<<"Error";
	}
	cout<<endl;
}
void ZipCode::barCodeToZipCode(string bars)  //changes barcode to zipcode
{
	len=bars.length();
	int count=0;
	if(len/5==5)
	{
		int numhold[5];
		for(int dig=0;dig<len-4;dig+=5)
		{
			holdbar=bars.substr(dig,5);
			for(int numbar=0; numbar<10; numbar++)
			{
				hold=num[numbar];
				if(holdbar==hold)
				{
					numhold[count]=numbar;
					count++;
				}
			}
		}
		for(int i=0; i<5; i++)
		{
			cout<<numhold[i];
		}
		cout<<endl;
	}
	else
	{
		cout<<"Error";
	}
	cout<<endl;
}
void ZipCode::zipCodeToBarCode(int zip)  //changes zipcode to barcode
{
	int digits=zip, len=5, temp, check=0;
	const char* bars[5];
	while(zip !=0)
	{
		zip=zip/10;
		check++;
	}
	if(check==5)
	{
		for(int count=0;count<5;count++)
		{
			temp=digits%10;
			digits=digits/10;
			for(int dig=0;dig<10;dig++)
			{
				if(dig==temp)
				{
					bars[4-count]=num[dig];
				}
			}
		}
		for(int i=0; i<5; i++)
		{
			cout<<bars[i];
		}
	}
	else
	{
		cout<<"Error";
	}
	cout<<endl;
}
void ZipCode::zipCodeToCheckBar(int zip)  //finds checkbar
{
	digits=zip;
	int sum=0, number[5], check=0, checkbar;
	string checkbarcode;
	while(zip !=0)
	{
		zip=zip/10;
		check++;
	}
	if(check==5)
	{
		for(int count=0;count<5;count++)
		{
			temp=digits%10;
			digits=digits/10;
			number[count]=temp;
			sum += temp;
		}

		sum=sum%10;
		if(sum==0)
		{
			checkbarcode=num[0];
		}
		else
		{
			checkbar=10-sum;
			for(int i=0; i<10; i++)
			{
				if(i ==checkbar)
				{
					checkbarcode=num[i];
				}
			}
		}
		cout<<checkbarcode;
	}
	else
	{
		cout<<"Error";
	}
	cout<<endl;
}

