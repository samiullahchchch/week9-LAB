#include<iostream>

using namespace std;

int main()
{
  
  int num;
  cout<<"Enter the number of size"<<endl;
  cin>>num;
  int number[num];
  
  for(int x=0; x<num;x++)
  {

   cout<<"Enter the number"<<endl;
   cin>>number[x];
  }
  int largest_number = 0;

 for(int x=0; x<num;x++ )
 {

     if(number[x]>largest_number)
     {
         largest_number      = number[x];

     }

 }

   cout<<"The largest number is : "<<largest_number<<endl;
}