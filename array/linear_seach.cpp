#include <iostream>
using namespace std;

int main(){

int n, key;
cin>>n;

int a[100];
int i;
for (i=0; i<n; i++){
cin>>a[i];
cout<<a[i]<<",";
}

cout<<"Enter the number you want to search: "<<endl;
cin>>key;

//linear search

cout<<"Enter the number you want to search: "<<endl;
cin>>key;

for(i=0; i<=n-1; i++){
  if(a[i]==key){
    cout<<key<<"majje aa gye"<<i<<"index"<<endl;
    break;
  }
  
}
if( i==n){
    cout<<"element not found";
  }

return 0;
}
