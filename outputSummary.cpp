// File:    outputSummary.cpp
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function outputSummary


#include <fstream>
using namespace std;
//included function prototypes
double avg(const int scores[],int count);
double median( const int scores[] , int& count);
double stDeviation(const int scores[], int count);

//function:outputsummary
//Description:output the maximum score, number of students, high scores
//             low score, range of score, average of scores, median and 
//             standars deviation of the scores.
//input: text file with max scores,name and scores obtained
//	 count (int)-the number of scores in the array
//output:<none>
//preconditions:
//postconditions:calculated results will be displayed as a textfile testsummary

void outputSummary(const int scores[],int count, int maxScore)
{ 
  ofstream outfile;
  outfile.open("testsummary");
  
  outfile<<"The output summary goes like this:"<<endl<<endl;
  outfile<<"The maximum score is "<< maxScore<<endl<<endl;
  outfile<<"The number of students processed is "<<count<<endl<<endl;
  outfile<<"The high score is "<<scores[0]<<endl<<endl;
  outfile<<"The low score is "<<scores[count-1]<<endl<<endl;
  outfile<<"The range of the score is "<<scores[0]-scores[count-1]<<endl;
  outfile<<"The average of the scores is "<<avg(scores,count)<<endl<<endl;
  outfile<<"The median score is "<<median (scores,count)<<endl;
  outfile<<"The standard deviation is "<<stDeviation(scores,count)<<endl<<endl;
  outfile.close();
}