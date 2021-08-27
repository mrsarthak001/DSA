#include <iostream>
#include <string>
using namespace std;

int main() {
  //String Init

  string s0;
  string s1("dotquestionmark");

  string s2 = "dotquestionmark";
  string s3(s2);

  string s4 = s3;

  char a[] ={'a','b','c','d','\0'};
  string s5(a);

  cout<<s0<<endl;
  cout<<s1<<endl;
  cout<<s2<<endl;
  cout<<s3<<endl;
  cout<<s4<<endl;
  cout<<s5<<endl;

//check empty string

if (s0.empty()){
  cout<<"0 mein kuch nahi hai"<<endl;
}

//append

s0.append("String is a container");
cout<<s0<<endl;
s0+= " and act like char array";
cout<<s0<<endl;


//Remove
cout<<s0.length()<<endl;
s0.clear();
cout<<s0.length()<<endl;

//compare two strings

s0="Apple";
s1="dq";

cout<<s1.compare(s0)<<endl;
  
//Overloaded operators

if(s1>s0){
  cout<<"Dq is bigger than apple"<<endl;
}

//find substring

string s = "I love my India";
int index= s.find("India");
cout<<index<<endl;

//Remove a word from the string

string word ="India";
int len = word.length();
cout<<s<<endl;
s.erase(index, len);
cout<<s<<endl;

//Iterate over all the character in the string

for(int i=0; i<s1.length(); i++){
  cout<<s1[i]<<","<<endl;
}

//itertors
for(string::iterator it=s.begin(); it!=s.end(); it++)
{
  cout<<(*it)<<","<<endl;
}

//for each loop
for (char c:s0){
  cout<<c<<","<<endl;
}

//replace

string a1 = "hello i am sarthak";
string a2 = " you";
a1.replace(7,0, a2);
cout<<a1<<endl;

    return 0;
  }
