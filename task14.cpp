#include<iostream>
using namespace std;
main()
{    
     string name;
     cout<<"enter the name:"<<endl;
     getline(cin,name);
     int count=0;
     
    for(int x=0; name[x]!= '\0';x++)
    {
        if(name[x]=='a'||name[x]=='e'||name[x]=='i'||name[x]=='o'||name[x]=='u')
         {
           count=count+1;


         }
 
     
 
    }

    cout<<"The number of vowels are  ::"<<count<<endl;


}