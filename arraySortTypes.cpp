/*
	KWashingtonLab27
	Des: MultiSorts
	04.18.18
*/

#include<iostream>
#include<ctime>
#include <cstdlib>

using namespace std;

template <class T>

void BubbleSort(T num[], int len) //compares the sizes of the value with the smallest numbers moving to th front and the other numbers moving behind it
{
	int i=1;
	int flag=1;
	T temp;
	
	while(i<=len && flag==1)
	{
		flag=0;
		for(int j=0; j<len-1; j++)
		{
			if(num[j+1]<num[j]) //checks to see if the number ahead is less than the current number
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
				flag=1;
			}
		}
		i++;
	}
}
template <class S>
void SelectionSort(S num[], int len)  //Compares the numbers in value and switches the numbers so that the largest number is at the back (placing the numbers in ascending order)
{
	S temp;
	int first=0;
	for(int i=len-1; i>0; i--)
	{
		first=0;
		for(int j=1; j<=i; j++)
		{
			if(num[j]>num[first]) //compares the values in the array and checks which one is greater
			{
				first=j;
			}
			temp=num[first];
			num[first]=num[i];
			num[i]=temp;
		}
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
	cout<<endl;
}
template<class D>
void MergeSort(D arrayA[], int lenA, D arrayB[],int lenB, D arrayC [], int lenC) //already sorted arrays will be compared to be combined into arrayC
{
     int indexA = 0;     
     int indexB = 0;
     int indexC = 0;
     while((indexA < lenA) && (indexB < lenB))
     {
          if (arrayA[indexA] < arrayB[indexB]) //compares the values in the arrays to one another placing them arrayc in ascending order
          {
                 arrayC[indexC] = arrayA[indexA];
                 indexA++;  
          }
         else
         {
                 arrayC[indexC] = arrayB[indexB];
                 indexB++;  
         }
        indexC++;     
     }
	 // Left overs from A
     while (indexA < lenA)
     {
           arrayC[indexC] = arrayA[indexA];
           indexA++;
           indexC++;
     }
	 // Left overs from B
	 while (indexB < lenB)
     {
           arrayC[indexC] = arrayB[indexB];
           indexB++;
           indexC++;
     }
}

template <class K>    
void InsertionSort(K arr[], int n) //compares whether the value on the right side is smaller than itself and moves accordingly
{
   int i, j;
   K key;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
      while (j >= 0 && arr[j] > key) //keeps track of the key's value, comparing it to the previous value in the array
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main()
{
	int len=20;
	int lenA = 10, lenB=5;
    int lenC = lenA +lenB;
	int num1[20];
	int num2[20];
	int numA[lenA];
	int numB[lenB];
	int numC[lenC];
	string s1[6]={"food","drinks","desserts","meals","computer","science"};

	srand(time(NULL));
	for(int i=0; i<len; i++) //random values for the arrays are assigned
	{
		num1[i]=rand() %100 +1;
		num2[i]=rand() %100 +1;
		if(i<10)
		{
			numA[i]= rand()%100 +1;
			if(i<5)
			{
				numB[i]= rand()%100 +1;	
			}
		}
	}
	cout<<"6 different arrays will be sorted using 4 different methods: Bubble Sort"<<endl; //menu is printed
	cout<<"Selection Sort, Insertion Sort, and Merge Sort in that order. "<<endl;
	cout<<endl;
	
	cout<<"Before Bubble Sort: "<<endl;  //all 4 of the sorts are performed
	printarray(num2,len);
	printarray(s1,6);
	BubbleSort(num2,len);
	BubbleSort(s1,6);
	cout<<"After Bubble Sort: "<<endl;
	printarray(num2,len);
	printarray(s1,6);
	cout<<endl;
	cout<<"Before Selection Sort: "<<endl;
	printarray(num1,len);
	SelectionSort(num1,len);
	cout<<"After Selection Sort: "<<endl;
	printarray(num1,len);
	cout<<endl;
	cout<<"Before: "<<endl;
	cout<<"1st Array: "<<endl;
	printarray(numA,lenA);
	cout<<"2nd Array: "<<endl;
	printarray(numB,lenB);
	
	InsertionSort(numA, lenA);
	InsertionSort(numB, lenB);
	cout<<endl;
	cout<<"After Insertion Sort: "<<endl;
	cout<<"1st Array: "<<endl;
	printarray(numA,lenA);
	cout<<"2nd Array: "<<endl;
	printarray(numB,lenB);
	cout<<endl;
	MergeSort(numA, lenA, numB, lenB, numC, lenC);
	cout<<"After Merge Sort: "<<endl;
	cout<<"3rd Array: "<<endl;
	printarray(numC,lenC);


}
/*
6 different arrays will be sorted using 4 different methods: Bubble Sort
Selection Sort, Insertion Sort, and Merge Sort in that order.

Before Bubble Sort:
61, 77, 16, 38, 5, 78, 53, 56, 85, 97, 89, 91, 75, 51, 81, 87, 83, 67, 57, 92.
food, drinks, desserts, meals, computer, science.
After Bubble Sort:
5, 16, 38, 51, 53, 56, 57, 61, 67, 75, 77, 78, 81, 83, 85, 87, 89, 91, 92, 97.
computer, desserts, drinks, food, meals, science.

Before Selection Sort:
61, 60, 82, 19, 67, 83, 72, 1, 16, 86, 90, 15, 92, 91, 67, 8, 4, 63, 89, 11.
After Selection Sort:
1, 4, 8, 11, 15, 16, 19, 60, 61, 63, 67, 67, 72, 82, 83, 86, 89, 90, 91, 92.

Before:
1st Array:
4, 43, 23, 54, 94, 91, 77, 41, 62, 73.
2nd Array:
91, 95, 63, 92, 93.

After Insertion Sort:
1st Array:
4, 23, 41, 43, 54, 62, 73, 77, 91, 94.
2nd Array:
63, 91, 92, 93, 95.

After Merge Sort:
3rd Array:
4, 23, 41, 43, 54, 62, 63, 73, 77, 91, 91, 92, 93, 94, 95.

*/
