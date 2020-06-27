// File:    stDeviation
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function stDeviation

#include <cmath>

//function prototypes
double avg(const int scores[],int count);

//Function: stDeviation
//Description: This function calculates standard deviation of scores
//Input :numbers (array of int)
//       count-the numbers of scores in the array
//output: standard deviation 
//Preconditions:count contains the number of scores in the array
//Postconditions:

double stDeviation(const int scores[], int count)
{
  double mean;
  double sqr ;
  double tot=0;
  double stDeviation;
  mean=avg(scores,count);
  for(int i=0;i <count;i++)
  {
    sqr=pow((scores[i]-mean),2);
    tot+=sqr;
  }
    stDeviation=sqrt(tot/count);
    return stDeviation;
}