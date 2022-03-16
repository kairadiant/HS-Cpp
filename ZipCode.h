#ifndef ZIPCODE_H
#define ZIPCODE_H
#include<string>
//Kayla Washington
using namespace std;

class ZipCode
{

	
	public:
		void barToDigit(string);
		void digitToBar(int);
		void barCodeToZipCode(string);
		void zipCodeToBarCode(int);
		void zipCodeToCheckBar(int);
		
	private:
		const char* num[10]={"||,,,",",,,||",",,|,|",",,||,",",|,,|",",|,|,",",||,,","|,,,|","|,,|,","|,|,,"};
		int len;
		int numlen;
		string bar;
		int digit;
		int digits;
		int temp;
		int zip;
		string bars;
		string hold;
		string holdbar;
};
#endif

