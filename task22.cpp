#include <iostream>
using namespace std;
main()
{
int count=0, count1=0,count2=0,count3=0;
float value;
float word[5];
for(int x=0; x<4;x++)
{
 cout<<"Enter the"<<x+1<<"value"<<endl;
 cin>>word[0];
}

count = word[0] * 0.25;
count1 =  word[1] * 0.10;
count2 =  word[2] * 0.05;
count3 =  word[3] * 0.01;
float toatal = count1 + count2 + count3 + count;
cout<<"Enter the total value"<<endl;
cin>>value;

if (toatal>word[5])
{
   cout<<"false";
}
 else if (toatal<word[5])
{
       cout<<"true";

 }







}