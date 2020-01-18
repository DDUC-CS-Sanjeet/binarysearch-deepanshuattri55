#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
  	if(lastIndex>=1)
	{
		int mid=startIndex+(lastIndex-1)/2;
		if(array[mid]==element)
		return mid;
		if(array[mid]>element)
		  return binarySearchReacursive(array,startIndex,mid-1,element);
		    return binarySearchReacursive(array,mid+1,lastIndex,element);
	}
  return true;
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
  while(startIndex<=lastIndex)
	{
		int m=startIndex+(lastIndex-1)/2;
		
			 
		if (array[m] == element) 
			return m; 

		
		if (array[m] < element) 
			startIndex = m + 1; 

		
		else
			lastIndex = m - 1; 
	}
  return true;
}

int main()
{	int size,choice,x;
	bool result,result1;
	cout<<"Enter the size of the array ";
	cin>>size;
	int ar[size];
	cout<<"enter the element of the array ";
	for(int i=0;i<size;i++)
	{
		cin>>ar[i];
	}

	 sort(ar,ar+size);
	
	cout<<"enter 1 for binarysearch by recursion ";
	cout<<"\n enter 2 for binarysearch by iteration";
	cout<<"\n enter your choice ";
	cin>>choice;
	cout<<"\nenter the no. to be search ";
	cin>>x;
	switch(choice)
	{
		case 1:
			 result = binarySearchReacursive(ar,0,size,x);
			if(result)
				cout<<"true";
			else
				cout<<"false";
			break;
		
		case 2:
			 result1 = binarySearchIterative(ar,0,size,x);
		if(result1)
				cout<<"true";
			else
				cout<<"false";
			break;
			
		default :
			cout<<"wrong choice";
			
	}




  return 0;
}
