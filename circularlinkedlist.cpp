#include<iostream>
using namespace std;
int main()
{
	 int i,n,x,j;
	 cout<< "Enter the number of elements present in array:" ;
	 cin>> n ;
	 int arr[n];
	 for(i=0;i<n;i++)
	 {
	 	cin>> arr[i];
	 }
	 cout<< "The Given array is:" ;
	 for(i=0;i<n;i++)
	 {
	 	cout<< arr[i] ;
	   }
	
}

