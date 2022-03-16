/* 
	KWashingtonLab17
	Des: ArrayManip
	12.21.17
*/

#include<iostream>

using namespace std;

int main()
{
	//1:firstLast6
	cout<<"This is called FirstLast6 and it will return true if a 6 is the first or last number. Otherwise, it will return false."<<endl;
	
	int len1;
	
	cout<<"Please enter how long you want the array to be: ";  //user enters length
	cin>>len1;
	
	int array1[len1];
	
	for(int i=0; i<len1; i++)
	{
		cout<<"Please enter your value for array: ";  //user enters values for the array
		cin>>array1[i];
	}
	
	if(array1[0]==6||array1[len1-1]==6)  //checks whether the first or last number is a six.
	{
		cout<<"True"; 
	}
	else
	{
		cout<<"False";
	}
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;   //border/seperation from other main parts of the code
	
	//2 plusTwo
	cout<<"This is called plusTwo and it will combine two arrays into one."<<endl;
	
	int array2[2], array3[2], newarray[4];
	
	for(int i=0; i<2;i++)
	{
		cout<<"Please enter a number for the first array: ";   //user enters values for first array
		cin>>array2[i];
	}	
	
	for(int i=0; i<2; i++)
	{
		cout<<"Please enter a number for the second array: ";  //user enters vales for second array
		cin>>array3[i];
	}
	
	for(int i=0; i<2; i++)
	{
		newarray[i]=array2[i];   //both arrays are combined into one array
		newarray[i+2]=array3[i];
	}	
	
	for(int i=0; i<4; i++)
	{
		cout<<newarray[i]<<" ";  //new array is printed out
	}
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	 //3. fix23
	 cout<<"This is called fix23 and if there is a two immediately followed by a three,"<<endl;
	 cout<<"it will replace the three with a zero."<<endl;
	 
	 int array4[3];
	 
	 for(int i=0; i<3; i++)
	 {
	 	cout<<"Enter a number: ";  //user enters values for array
	 	cin>>array4[i]; 
	 }
	 
	 for(int i=0; i<3; i++)
	 {
	 	if(array4[i]==2&&array4[i+1]==3) //checks if there is a 2 followed by a 3 and replaces the 3 with a 0
	 	{
	 		array4[i+1]=0;
	 	}
	 }
	 
	 for(int i=0; i<3; i++)
	 {
	 	cout<<array4[i]<<" ";  // new array is printed out
	 }
	 cout<<endl;
	 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	 //4. startEnd
	 
	cout<<"This is called startEnd. You will enter two numbers and an array containing"<<endl; 
	cout<<"all numbers in between will be formed."<<endl;
	
	int len2, start, end;
	
	cout<<"Enter the starting number: ";  //user enters starting number
	cin>>start;
	
	cout<<"Enter the ending number: ";
	cin>>end;
	
	if(start>end)  //makes sure that the starting number is smaller than the ending number
	{
		while(start>end)
		{
			cout<<"Please enter a number less than the ending number: ";
			cin>>start;
		}
	}
	
	len2=end-start;  //calculations for the length are made and a new array is formed
	
	int array5[len2], temp=start;
	
	for(int i=0;i<len2;i++)  //array is filled with numbers from the starting to the number before the ending number
	{
		array5[i]=temp;
		temp++;
		cout<<array5[i]<<" ";
	}
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	//5. evenOdd
	cout<<"This is called evenOdd and it will create a new array with all the even #'s at the front."<<endl;
	
	int len3, check1=0;
	
	cout<<"Please enter your desired length: ";
	cin>>len3; 
	
	int array6[len3], array7[len3];
	
	for(int i=0; i<len3; i++)
	{
		cout<<"Please enter a number: ";  //values for the array are entered in by the user
		cin>>array6[i];
	}
	
	for(int i=0; i<len3; i++)
	{
		if(array6[i]%2==0)
		{
			array7[check1]=array6[i];  //within a new array the even values are first placed at the starting portion of the array
			check1++;
		}
	}
	
	for(int i=0; i<len3; i++)  //the remaining odd values are then added to the array
	{
		if(array6[i]%2==1)
		{
			array7[check1]=array6[i];
			check1++;
		}
	}
	
	for(int i=0; i<len3; i++)  //the new array is printed out with new values
	{
		cout<<array7[i]<<" ";
	}
	return 0;
}

/*
This is called FirstLast6 and it will return true if a 6 is the first or last number. Otherwise, it will return false.
Please enter how long you want the array to be: 4
Please enter your value for array: 1
Please enter your value for array: 7
Please enter your value for array: 5
Please enter your value for array: 8
False
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
This is called plusTwo and it will combine two arrays into one.
Please enter a number for the first array: 1
Please enter a number for the first array: 2
Please enter a number for the second array: 3
Please enter a number for the second array: 4
1 2 3 4
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
This is called fix23 and if there is a two immediately followed by a three,
it will replace the three with a zero.
Enter a number: 1
Enter a number: 2
Enter a number: 3
1 2 0
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
This is called startEnd. You will enter two numbers and an array containing
all numbers in between will be formed.
Enter the starting number: 6
Enter the ending number: 17
6 7 8 9 10 11 12 13 14 15 16
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
This is called evenOdd and it will create a new array with all the even #'s at the front.
Please enter your desired length: 8
Please enter a number: 0
Please enter a number: 1
Please enter a number: 0
Please enter a number: 0
Please enter a number: 0
Please enter a number: 1
Please enter a number: 1
Please enter a number: 2
0 0 0 0 2 1 1 1
*/
