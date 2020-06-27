// File:    main.cpp
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function main
// The program will read scores and name of students  from the file and store them into a parallel array
// sort them and output as two files testresults and testscore
#include <string>
#include <fstream>

#include "constants.h"     //constants 
using namespace std;

//function prototypes
double avg(const int scores[],int count);
double median( const int scores[] , int& count);
void outputScores(const string names[],const int scores[],int count,int maxScore);
void outputSummary(const int scores[],int count, int maxScore);
void read(string names[],int scores[],int& count,int& maxScore);
void sort(string names[],int scores[] , int count);
double stDeviation(const int scores[], int count);

//Function: main
//Description: the main function calls the other functions
//Input: <none>
//output: <none>
//Preconditions:<none>
//postconditions:<none>

int main() 
{
  //variables
  string names [ arraySize];    //name storing array
  int scores[arraySize]; 
  int maxScore;           //maximum scores
  int count;              // count of scores
  
  //calling above function
  read(names,scores,count,maxScore);
  sort(names,scores,count);
  outputScores(names,scores,count,maxScore);
  outputSummary(scores,count,maxScore);
  return 0;
}    
