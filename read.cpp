// File:    read.cpp
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function read
#include <string>
#include <fstream>
#include "constants.h"
using namespace std;

// Function:read
//Description:reads ints from a textfile and stored them in a 
//             parallel arrays..
//input: < textfile with max score, name and score obtained>
//output: scores(array of int)
//        count(int)-the number of integers read and stored into the array
//Preconditions: <none>
//Postconditions:arrays with names and scores will read
 
void read(string names[],int scores[],int& count,int& maxScore)
  {
    ifstream infile;
    infile.open("testscores");
    string name;
    infile >> maxScore;
    count=0;
    infile.ignore(80,'\n');
    getline(infile,name);
    while(!infile.eof() && count < arraySize)
    {
      names[count]=name;
      infile >> scores[count];
      count++;
      infile.ignore(80, '\n');
      getline(infile,name);
    }
    infile.close();
  }
