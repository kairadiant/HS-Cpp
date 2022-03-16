#include "ZipCode.h"
#include<iostream>
#include <string>

//Kayla Washington
using namespace std;

int main()
{
	ZipCode barCode;
	int user=1, userchoice, userzip;
	string userbar;
	
	while(user==1) //menu until user exits
	{
		cout<<"Menu:"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"1) Zip Code -> Bar Code"<<endl;
		cout<<"2) Bar Code -> Zip Code"<<endl;
		cout<<"3) Exit"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"Choice: ";
		cin>>userchoice;
		if(userchoice==1)
		{
			cout<<"Enter zip code: ";
			cin>>userzip;
			barCode.zipCodeToBarCode(userzip);
			cout<<endl;
			
		}
		else if(userchoice==2)
		{
			cout<<"Enter bar code: ";
			cin>>userbar;
			barCode.barCodeToZipCode(userbar);
			cout<<endl;
		}
		else if(userchoice==3)
		{
			user=0;
		}

	}

	barCode.barToDigit(",,||,"); // prints 3
	barCode.barToDigit("|,,,|"); // prints 7
	barCode.barToDigit("|||||"); // prints -1



	barCode.barCodeToZipCode("|,,,|||,,,|||,,,,,,||,,||,|,,|,|");
	
 // Prints 17013
	
	barCode.digitToBar(3);  	// prints ",,||,"
	barCode.digitToBar(7);  	// prints "|,,,|"
	barCode.digitToBar(99); 	// prints "error"


	barCode.zipCodeToBarCode(17013);
	// Prints "| ,,,|| |,,,| ||,,, ,,,|| ,,||, |,,|, |"

	barCode.zipCodeToBarCode(983);
	// Prints "error"


	barCode.zipCodeToCheckBar(17013); 
	// Prints "|,,|,"

	barCode.zipCodeToCheckBar(392); 
	// Prints "error"

}
/*
Menu:
-----------------------
1) Zip Code -> Bar Code
2) Bar Code -> Zip Code
3) Exit
-----------------------
Choice: 1
Enter zip code: 12768
,,,||,,|,||,,,|,||,,|,,|,

Menu:
-----------------------
1) Zip Code -> Bar Code
2) Bar Code -> Zip Code
3) Exit
-----------------------
Choice: 2
Enter bar code: ||,,,,,,|||,,,|,|,,|,||,,
01746


Menu:
-----------------------
1) Zip Code -> Bar Code
2) Bar Code -> Zip Code
3) Exit
-----------------------
Choice: 3
3
7
-1
Error
,,||,
|,,,|
Error
,,,|||,,,|||,,,,,,||,,||,
Error
|,,|,
Error
*/
