#include <iostream>
using namespace std;
int main(){
cout<<"Enter Number of Cards :";    // Taking the input of Number of cards
int size;
cin>>size;
int arr[size];
cout<<"Enter Cards :";
for(int i=0; i<size; i++){
cin>>arr[i];
}
for(int p=0; p<size; p++){      //Number of Passes
int i=p+1;        //Initialization of first value of unsorted array
int j=i-1;       //Initialization of last value of sorted array
int temp=arr[i];         //storing the unsorted first value in temp
while(j>=0 && temp<arr[j]){
arr[j+1] = arr[j];    // Insertion 
j--;
}
arr[j+1]=temp;
cout<<"cards after pass : "<<p+1<<"\n";
for(int i=0; i<size; i++){
cout<<" "<<arr[i];
}
cout<<"\n";
}
cout<<"\n Your Cards in hand are :";    // Displaying the Cards
for(int i=0; i<size; i++){
cout<<" "<<arr[i];
}
return 0;
}
