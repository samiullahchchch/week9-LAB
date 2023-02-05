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
  int smallest_number = number[0];

 for(int x=0; x<num;x++ )
 {

     if(number[x+1]<smallest_number)
     {
         smallest_number    = number[x+1];

     }

 }

   cout<<"The smallest number is : "<<smallest_number<<endl;
}