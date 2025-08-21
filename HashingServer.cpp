#include <iostream>
using namespace std;
int main() {
int n;
cout<<"enter total number of server:";
cin>>n;
int arr[n];
int req;
cout<<"\n";
int i=0;
int id; //taking id as input
do {
cout<<"Do You Want to request then enter 1 or 0 for exit: ";
cin>>req;
if (req==0){ //condition for breaking the loop
break;
}
cout<<"Enter id:";
cin>>id; //taking id as input

int hashvalue = id % n; //finding the hashvalue
arr [hashvalue]=id; //storing the id at the index hashvalue
i++; //increament codition
}
while(i<n && req); //loop breaking condition
cout<<"\n";
if (req==1){ //server printing condition
for(int i=0; i<n; i++){
cout<<"the id "<<arr[i]<<" is forwarded to server "<<i;
cout<<"\n";
}
}

cout<<"Server exit"; //final message
return 0;
}