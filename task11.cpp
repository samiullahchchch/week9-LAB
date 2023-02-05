#include<iostream>

using namespace std;

int main ()
{
   string name;
   bool check = false;
   cout<<"Enter your name"<<endl;
   getline(cin,name);

   char character;
   cout<<"Enter the character"<<endl;
   cin>>character;


     for(int x=0; name[x] != '\0';x++ )
     {
      

       if(name[x]==character)
          {

            check=true;
             break;
          }

      

     }
   
        if(check=true)
      {

        cout<<"present";
      }
      else
      {

        cout<<"not present:";
      }
 





}