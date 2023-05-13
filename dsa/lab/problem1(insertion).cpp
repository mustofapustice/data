#include <iostream>
using namespace std;
int main()
{
   int  position, i, n, value;
   cout<<"Enter number of elements in array:";
   cin>>n;
   int array[n];
   for (i = 0; i < n; i++)
   {
       cout<<"enter the "<<i+1<<" element=";
   cin>>array[i];
    }
   cout<<"Enter the location where you wish to insert an element:";
   cin>>position;
   cout<<"Enter the value to insert:";
   cin>>value;
   for (i= n - 1; i >= position - 1; i--)
   {
  array[i+1] = array[i];
    }
	array[position-1] = value;
    cout<<"Resultant array is:";
   for (i = 0; i <= n; i++)
   {
      cout<<array[i]<<" ";
         }
         return 0;
}
