/*
	KWashingtonLab25
	Des: Sequential Search
	04.11.18
*/
#include <iostream>
using namespace std;
template <class T>

void seqSearch (T v1, T array[], int num)
{
	int track=0;
	for(int i=0; i<num; i++)
	{
		if(v1==array[i])  //this compares the input value (int/string) and finds if it is in the array
		{
			track=1;
			cout<<v1<<" is in the array and it's index is "<<i<<"."<<endl;  //if so it prints out the index
		}
	}
	if(track ==0) // if value is not in the array, it prints that out.
	{
		cout<<v1<<" is not in the array."<<endl;
	}
}
template<class P>
void printarray(P array[], int len)
{
	for(int i=0; i<len; i++)
	{
		if(i+1==len)
		{
			cout<<array[i]<<".";
		}
		else
		{
			cout<<array[i]<<", ";	
		}
	}
}
int main()
{
	int values[7]= {25,665,245,467,106,825,200};
	string ingredients[6]= {"tomatoes", "salt", "pepper","garlic","chicken","beans"};
	
	int v1=824, v2=245;
	string s1="onion", s2="beans";
	
	cout<<"This program is going to compare selected values with values in an array."<<endl;  //synopsis of what the function does
	cout<<"If the values is found in the array, it will print it's index."<<endl;
	cout<<endl;
	
	cout<<"The first array is: "<<endl;  //output of the arrays
	printarray(values, 7);
	cout<<endl;
	cout<<"The second array is: "<<endl;
	printarray(ingredients, 6);
	
	cout<<endl<<endl;
	seqSearch(v1, values,7);  //calling to the functions to check for: 245, 824, onion, and beans
	seqSearch(v2, values,7);
	seqSearch(s1, ingredients,6);
	seqSearch(s2, ingredients,6);
	return 0;
}
/*
	This program is going to compare selected values with values in an array.
	If the values is found in the array, it will print it's index.
	
	The first array is:
	25, 665, 245, 467, 106, 825, 200.
	The second array is:
	tomatoes, salt, pepper, garlic, chicken, beans.
	
	824 is not in the array.
	245 is in the array and it's index is 2.
	onion is not in the array.
	beans is in the array and it's index is 5.
	
*/
