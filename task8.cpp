#include<iostream>
using namespace std;

int main()
{
    char word[26] =  {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    for(int x=0;x<26;x++)
    {
    cout<<"The loctaion of  "<<word[x]<< "  is  "<<x+1<<endl;

    }

}