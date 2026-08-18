// An election is contested by five candidates. The candidates are numbered 1 to 5 and
// the voting is done by marking the candidate number on the ballot paper. Write a
// program to read the ballots and count the votes cast for each candidate using an array
// variable count. In case, a number read is outside the range 1 to 5, the ballot should be
// considered as a ‘spoilt ballot’, and the program should also count the number of spoilt
// ballots.



#include <iostream>
using namespace std;
int main(){
 int count[5] = {0}; // index 0 for candidate 1, 4 for candidate 5
 int spoiled = 0;
 int ballot;
 cout << "Enter ballots (0 to stop): ";
 while(cin >> ballot && ballot != 0){
 if(ballot >= 1 && ballot <= 5){
 count[ballot-1]++;
 }else{
 spoiled++;
 }
 }
 cout << "Votes:\n";
 for(int i=0;i<5;i++){
 cout << "Candidate " << i+1 << ": " << count[i] << "\n";
 }
 cout << "Spoilt ballots: " << spoiled;
 return 0;
} 