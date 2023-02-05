#include <iostream>
using namespace std;
bool check(string word, char letter);

main(){
string word;
char character;
cout << "Enter a Word: ";
cin >> word;
cout << "Enter the character youwant to find: ";
cin >> character;
if(check(word, character))
{
cout << character << " is found in" << word;
}
else{
cout << character << " is not found in " << word;
}
}

bool check(string word, char letter)
{
bool isFound = false;
for(int x = 0; word[x] != '\0'; x++){
if (word[x] == letter){
isFound = true;
break;
}
}
if (isFound == true){
return 1;
}
else{
return 0;
}
}
