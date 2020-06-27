// File:    median.cpp
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function median

//function: median 
//Description: outputs the median of the scores 
//input : scores(array of int)
//        count(int)-the numbers of integers in the array
//output  :median-the median of the scores
//preconditions: count contains the number of scores in the array
//postconditions: the median of the scores is output to the file

double median( const int scores[] , int& count)
{
  int c1,c2;
  double even, odd;
  c1=(count/2);
  c2=(count/2)-1;
  even=static_cast<double>((scores[c1]+scores[c2]))/2;
  odd=scores[c1];
  
    if(count%2==0)
      return even;
    else
      return odd;
  
}