#include<iostream>
using namespace std;

int main()
{
 int num;
 cout<<"Enter the number of size"<<endl;
 cin>>num;


 float number[num];
 float totalohms = number[0];

 for(int x=0; x<num;x++)
 {
     cout<<"Enter the "<<x+1<<"ohms"<<endl;
     cin>>number[x];
}

  for(int x=0; x<num;x++)
{
totalohms = totalohms + number[x+1] ;

}

cout<<"The total resistance of series  circut is: "<<totalohms<<"ohms"<<endl;




}