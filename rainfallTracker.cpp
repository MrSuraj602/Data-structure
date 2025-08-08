#include <iostream>
using namespace std;
int main() {
float arr[3][7];
for(int i=0;i<3;i++){
cout<<"city"<<i+1<<"\n";
for(int j=0;j<4;j++){
cout<<"enter month "<<j+1<<":";
cin>>arr[i][j];
}
cout<<"\n";
}

cout<<"Rain Tracker B24CE1063 \n";
cout<<"cities month1 month2 month3 month4 average \n";
for(int i=0;i<3;i++){
cout<<"----------------------------------------------------------------------------\n";
cout<<"city"<<i+1;
float avg =0;
for(int j=0;j<4;j++){
cout<<" "<<arr[i][j];
avg+=arr[i][j];
}
cout<<" "<<avg/7;
cout<<"\n";
}

return 0;
}