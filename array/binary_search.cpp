#include <iostream>
using namespace std;

int binary_search(int a[], int n, int key){
  int s=0;
  int e=n-1;

  while(s<=e){
    int mid = (s+e)/2;
    if (a[mid]==key){
      return mid;
    }
    if(a[mid]>key){
      e = mid -1;
    }
    else{
      s=mid + 1;
    }
  }
  return -1;
}


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

cout<<binary_search(a,n, key)<<endl;

return 0;
}
