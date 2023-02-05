#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter the name:"<<endl;
    getline(cin,name);
    int x=0;
    while( name[x]!='\0')
    {
                
           x=x+1;

    }
    x=x-1;
    cout<<x;
}