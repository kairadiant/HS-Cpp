/*
	KWashingtonLab29
*/
#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>

using namespace std;

int main()
{
	string answer, name, key="EADBCA";
	int grade=0;
	
	ifstream sgrade("scantron.txt");
	cout<<setw(8)<<"Name"<<"\t"<<setprecision(10)<<"Answer"<<"\t"<<setprecision(10)<<"Percent"<<endl;
	if(sgrade.is_open())
	{
		while(sgrade.peek()!=-1)
		{ 	
			grade=0;
			sgrade>>name>>answer;
			for(int i=0; i<6; i++)
			{
				if(answer.substr(i,1)==key.substr(i,1))
				{
					grade++;
				}
			}
			cout<<setw(8)<<name<<"\t"<<setprecision(10)<<answer<<"\t"<<setprecision(10)<<(grade*100)/6<<"%"<<endl;
			
		}	
	}
}

/*
    Name        Answer  Percent
   Jones        AECBDC  16%
   Smith        BECADC  0%
     Lee        EABADC  33%
 Andrews        BDCEAB  0%
Robinson        ABCDEE  0%
   Baker        CECADC  0%
 Jackson        BEEADC  0%
  Chavez        AABCDE  16%
   Evans        EECADB  16%
    Chin        BCDEAB  16%
   Allen        AACADD  16%
   Young        BEDDDC  16%


*/
