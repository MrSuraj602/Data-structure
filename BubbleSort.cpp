#include <iostream>
using namespace std;
int main(){
int player1[100];
int player2[100];
int n;
cout << "Enter how many scores each player will input: ";
cin >> n;  //Taking input the of each student's number of score
cout << "\nEnter " << n << " scores for Player 1:\n";
for(int i = 0; i < n; i++){  //Taking input of Player 1's Scores
cout <<"Score " << i + 1 << ": ";
cin >> player1[i];
}
cout << "\nEnter " << n << " scores for Player 2:\n";
for(int i = 0; i < n; i++){//Taking input of Player 2's Scores
cout << "Score " << i + 1 << ": ";
cin >> player2[i];
}
for(int i = 0; i < n - 1; i++){  //Sorting Score of Player 1 in Descending Order
for(int j = 0; j < n - i - 1; j++){
if (player1[j] < player1[j + 1]){
int temp = player1[j];
player1[j] = player1[j + 1];
player1[j + 1] = temp;
}
}
}
for(int i = 0; i < n - 1; i++){  //Sorting Score of Player 2 in Descending Order
for(int j = 0; j < n - i - 1; j++){
if (player2[j] < player2[j + 1]){
int temp = player2[j];
player2[j] = player2[j + 1];
player2[j + 1] = temp;
}
}
}
cout << "\n--- Sorted Scores (Descending Order) ---\n";
cout << "Player 1 Scores: ";
for(int i = 0; i < n; i++){  //Printing Player 1 Score
cout << player1[i] << " ";
}
cout << "\nPlayer 2 Scores: ";
for(int i = 0; i < n; i++){ //Printing Player 2 Score
cout << player2[i] << " ";
}
int highest1 = player1[0];
int highest2 = player2[0];
cout << "\n\n--- Final Result ---\n";
cout << "Player 1 Highest Score: " << highest1 << endl;
cout << "Player 2 Highest Score: " << highest2 << endl;
if(highest1 > highest2){ //Condition for checking the winner player
cout << "\nPlayer 1 Wins with the Highest Score!\n";
}else if(highest2 > highest1){
cout << "\nPlayer 2 Wins with the Highest Score!\n";
}else{
cout << "\nIt's a Tie! Both have the same highest score.\n";
}
return 0;
}
