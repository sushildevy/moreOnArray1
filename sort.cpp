//File: sort.cpp
//Author: Sushil Pandey
//program:prog6
//Date:03/21/2018

//Description:This file contains the function sort
#include <string>
using namespace std;
//function:sort 
//Description:This function will sort an array descendingly
//Input: text file with max score, name and score obtained
//count(int)-the number odf values in an array
//output:numbers(array of int) - sorted descendingly

//precondition:count contains the number of values store in an array

//postCondition:The array of integers is arranged in descending order


   
void sort(string names[],int scores[] , int count)
{
   int temp;
   int large;
   string name1;
   for (int i=0; i<count-1; i++)   // put n-1 ints in their correct spot
   {
      large=i;
      for (int j=i+1;j<count;j++)//loop to find the largest
         if (scores[j] > scores[large])
            large=j;
      temp = scores[i];         // put largeest in proper position
      scores[i] = scores[large];
      scores[large] = temp;
      name1=names[i];
      names[i]=names[large];
      names[large]=name1;
   }
}
