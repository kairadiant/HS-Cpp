/*
	KWashingtonLab26
	Des: Binary Search
	04.13.18
*/

#include<string>
#include<iostream>
using namespace std;

template<class T>
void BinarySearch(T value, T array[], int len)  //function that identifies whether the value is in the array and if so, what index it has.
{
	int beg=0, end=len, middle=(beg+end)/2;
	
	while(value!=array[middle] && beg<end) //the while loop checks the values of the array while starting in the middle
	{
		if(value>array[middle]) //it then compares the value as to whether the value is greater than that of the array
		{
			beg++;
			
		}
		else  //if greater than, it adds one to the int beg if less than it subtracts one fron the int end
		{
			end--;
		}
		middle=(beg+end)/2;  // the value "middle" is changed with the new values of beg and end. The process will repeat.
	}
	if(value!= array[middle]) //if the value cannot be found, it will cout this message
	{
		cout<<value<<" could not be found."<<endl;
	}
	else  //the index of the values is printed
	{
		cout<<value<<" has an index of: "<<middle<<"."<<endl;
	}
}
template<class P>
void printarray(P array[], int len) //function that prints out the arrays
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
	int values[7]= {25,65,245,467,706,825,1200};
	string ingredients[6]= {"beans", "chicken","garlic","pepper","salt","tomatoes"};
	
	int v1=824, v2=245;
	string s1="onion", s2="beans";
	
	cout<<"This program is going to compare selected values with values in an array"<<endl;  //synopsis of what the function does
	cout<<"using binary search. If the values is found, it will print it's index."<<endl;
	cout<<endl;
	
	cout<<"The first array is: "<<endl;  //output of the arrays
	printarray(values, 7);
	cout<<endl<<endl;
	cout<<"The second array is: "<<endl;
	printarray(ingredients, 6);
	
	cout<<endl<<endl;
	BinarySearch(v1, values,7);  //calling to the functions to check for: 245, 824, onion, and beans
	BinarySearch(v2, values,7);
	cout<<endl;
	BinarySearch(s1, ingredients,6);
	BinarySearch(s2, ingredients,6);
	return 0;
}
/*
This program is going to compare selected values with values in an array
using binary search. If the values is found, it will print it's index.

The first array is:
25, 65, 245, 467, 706, 825, 1200.

The second array is:
beans, chicken, garlic, pepper, salt, tomatoes.

824 could not be found.
245 has an index of: 2.

onion could not be found.
beans has an index of: 0.
*/
