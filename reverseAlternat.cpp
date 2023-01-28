#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    // cout<<" reverse of alternate element of given array is:";
     for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void reverseAlternate(int arr[],int n)
{
    int temp = 0;
    for(int i =0;i<n; i+=2)
    {
    if(i+1<n)
    {
temp = arr[i+1];
arr[i+1] = arr[i];
arr[i] = temp;
    }
    }
    
    
}
int main()
{
   
    int even[20] = {1,2,3,4,5,6};
    int odd[20] = {1,2,3,4,5};
    reverseAlternate(even ,6);
    printArray(even ,6);
    cout<<endl;
    reverseAlternate(odd ,5);
    printArray(odd ,5);
    
    
    return 0;
}