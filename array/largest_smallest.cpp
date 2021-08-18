#include <iostream>
#include <climits>
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

//Largest and Smallest number in an array

int largest = INT_MIN;
int smallest = INT_MAX;

for(i=0; i<n; i++){
  if(a[i]>largest){
    largest=a[i];
  }
  if(a[i]<smallest){
    smallest=a[i];

  }
}
cout<<"largest NO: "<<largest<<endl;
cout<<"smallest NO: "<<smallest<<endl;


return 0;
}
