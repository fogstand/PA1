

*******************************************************
* Name      : Ravisher Singh
* Student ID: 101844874
* Class     :  CSC 2312
* HW#       :  02
* Due Date  :  August 30, 2020
*******************************************************
Read Me

********************************************************

Description of the program

*******************************************************
 This program generates 100,000 random integers between 0 - 1,000,000,
 saves them to a text file where each line has 5 numbers per line and read the numbers back into a plain old array of integers.
It asks the user to enter a number between 0 - 1,000,000 and uses the binary search algorithm to determine if the specified number
is in the array or not. It used Insertion sort to keep track of number of swappings and comparisons made by number first on sorted array,
once again and lastly on reversly sorted array built from the previously sorted


********************************************************
 Source files
*******************************************************
Name:  main.cpp
Main Program has declaration and Implementation of Binary search,Insertion Sort and reverse InsertionSort.
1. We generate 100000 random numbers and read it to file and back into an array.
2.We ask the use to enter a number b/w 0-100000.
3. Binary search is run based upon the number we enter to check if specified number is in array or not.
4. Insertion sort is run on sorted array
5. Insertion sort is run on sorted array again to count the number of comparisons and swappings
6.Again insertion sort is invoked but this time on reversly sorted array built from previously sorted array.

********************************************************
  Circumstances of programs
*******************************************************
The program runs successfully.The program was developed and tested on gnu g++ 4.4.2.  It was compiled, run, and tested on gcc ouray.cudenver.edu.
********************************************************
How to build and run the program
*******************************************************
1.  Uncompress the homework.  The homework file is compressed.To uncompress it use the following commands% unzip SinghRavisher_HW02
Now you should see a directory named homework with the files:
main.cpp
Rectangle.cpp
Rectangle.h
RectangleAreaComparator.h
RectanglePerimeterComparator.h
makefile
Readme.txt
2.  Build the program.
Change to the directory that contains the file by:% cd [SINGHRAVISHER_HW02]
Compile the program by:% make
3.  Run the program by:% ./SinghRavisher_HW02
4.  Delete the obj files, executables, and core dump by%./make clean











