#include<iostream>
using namespace std;


int main()
{
   string  word;
   cout<<"Enter the words"<<endl;
   getline(cin,word);

   
    int x=0;
    while(word[x] != '\0')
    {
     if (word[x] == 'a'|| word[x] == 'e'|| word[x] == 'i' ||word[x] == 'o'|| word[x] == 'u')
     {
        x++;
        continue;
            
     }
     
    cout<<word[x];
     x++;
    }
     

}