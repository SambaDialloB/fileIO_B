//Name: Samba Diallo
//Date: 10/22/15
//Summary: cleans up the file and outputs the right score

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
string ui, fname, lname, winner;
double s1, s2, s3, s4, s5, s6, avg = 0, avg1 = 0;
cout << "Enter file name and type ex. scores.txt : ";
cin >> ui;
ifstream fin;
ofstream fout;
fin.open("scores.txt");
fout.open("results.txt");


while(fin >> fname >> lname >> s1 >> s2 >> s3 >> s4 >> s5 >> s6){
if (fname == "Highest")
    break;
fout.setf(ios::fixed);
fout.setf(ios::showpoint);
fout.setf(ios::left);
fout.precision(1);
fout << setw(12) << fname << setw(12) << lname << setw(6) << s1 << setw(6) << s2 << setw(6) << s3 << setw(6) << s4 << setw(6) << s5 << setw(6);

avg1 = ((s1 +s2 + s3 + s4 + s5) / 5);
if(avg1 > avg){
    avg = avg1;
    winner = fname + " " + lname;
    }
fout.setf(ios::fixed);
fout.setf(ios::showpoint);
fout.setf(ios::left);
fout.precision(2);
fout << avg1 << endl;}

fout << endl << "Highest score: " << winner;

fin.close();
fout.close();




return 0;}

