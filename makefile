# File:    makefile
# Author:  Sushil Pandey
#Program: prog6 
# Date:    03/21/2018

# Description: This file contains the makefile
#macros
OBJECTS=main.o outputScores.o read.o average.o sort.o median.o outputSummary.o stDeviation.o
CC=g++
EXE=prog6
CFLAGS=-Wall
LFLAGS=
$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp constants.h
		$(CC) $(CFLAGS) -c main.cpp
read.o:		read.cpp constants.h
		$(CC) $(CFLAGS) -c read.cpp
average.o:	average.cpp 
		$(CC) $(CFLAGS) -c average.cpp
median.o:	median.cpp 
		$(CC) $(CFLAGS) -c median.cpp
sort.o:	        sort.cpp 
		$(CC) $(CFLAGS) -c sort.cpp
stDeviation.o:	stDeviation.cpp average.cpp
		$(CC) $(CFLAGS) -c stDeviation.cpp
outputScores.o:	outputScores.cpp 
		$(CC) $(CFLAGS) -c outputScores.cpp
outputSummary.o:outputSummary.cpp average.cpp median.cpp stDeviation.cpp
		$(CC) $(CFLAGS) -c outputSummary.cpp
		
# This cleans out the directory before handing it in
clean:
		rm -rf $(OBJECTS) $(EXE) *~
