// File:    outputScores.cpp
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function outputScores



#include <fstream>
#include <iomanip>
#include "constants.h" 
using namespace std;



//function outputScores
//Description: output the tabulation form of file named testresults with  
//              name,score,respected percentage and respected grade 
//input:a file with max score, name and scores obtained
//output:name
//       score
//       percentage
//       grade (character grade of eacb score)       
//count(int)-the number of scores in the array
//preconditions:count contains the number of scores in the array
//postconditions: toutput the text file testresults

void outputScores(const string names[],const int scores[],int count,int maxScore)
{ 
  char grade;
  ofstream outfile;
  outfile.open("testresults");
  outfile  << setw(26) <<left<<"Name"<<setw(8)<<"score" <<setw(16) <<right<<"Prercentage(%)"<<setw(12)<<"Grade"<<endl;
  outfile << "-------------------     -------     ---------------     --------"<<endl;
  for(int i=0;i<count;i++)
  {
    outfile<<fixed<<showpoint<<setprecision(2);
    double pct = static_cast<double>(scores[i]) / maxScore * 100;
  if (pct >= A_min)
     grade='A';
  else if (pct>=B_min)
      grade='B';
  else if (pct>=C_min)
      grade='C';
  else if (pct >=D_min)
    grade='D';
  else
    grade='F';
  outfile<<setw(23)<<left<<names[i] <<setw(6)<<right<<scores[i]<<setw(15)<<pct<<" %"<<setw(14)<<grade<<endl;
       
  }
  outfile.close();
}