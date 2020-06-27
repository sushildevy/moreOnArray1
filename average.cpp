// File:    average.cpp
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function avg

//function:avg
//Description: output the averageof the scores to the screen
//Input: scores(array of int)
//	count(int)-the numbers of scores in the array
//output: <none>
//preconditions: count contains the number of scores in the array
//postconditions: average of the scores is output to the file.


double avg(const int scores[],int count)
{    
     int sum=0;
     for(int i=0; i<count;i++)
     {
         sum+=scores[i];
 
     }
        
     return static_cast<double>(sum )/count;
     
}
