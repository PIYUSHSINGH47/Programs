#include<iostream>
using namespace std;
void linear()
{
    int i,n,x,y,j;
    cout<< "Enter the number of elements present in array:" ;
    cin>> n ;
    int arr[n] ;
    for(i=0;i<n;i++)
    {
        cin>> arr[i] ;
    }
    // cout<<endl;
    // cout<< "Enter the element which you want to search :";
    cin>> x ;
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"the element is found at position : "<<i+1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"the element is not found ."<<endl;
    }
    return ;
void binary()
{
    int i,n,x,y;

}
}
int main()
{
    linear();
    binary();
    return 0;
}