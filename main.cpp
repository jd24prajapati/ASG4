/**
 * This program is written in C++ language.
 * Purpose of this assignment is to generate and fill an array with random numbers 
 * and then sort the array using shaker sort alogorithm, a bi-directional implementation of 
 * bubble sort algorithm. 
 * 
 * This program will calculate the sorting time for ascending and descending for the same array and display it
 * 
 * */



#include<iostream>
#include <time.h>
#include"ASG4_header.h"
using namespace std;


/**
* Module            : Main method
* Author            : Jaydeep Prajapati(Student ID: 200168915)
* Date of creation  : 09 Nov, 2021
* Purpose           : This will call and oprate all the function for given query
* Parameter(s)      : N/A
* Precondition(s)   : N/A
* Returns           : N/A 
* Side effect       : N/A 
*
*  */
int main()
{
    unsigned int size;

    // Getting the input size of an array from user
    cout<< "Enter the array size: "<< endl;
    cin>> size; 

    cout<< "Size :"<< size<< endl;

    // Initializing an array with given size 
    int *arr = new int[size];
    // creating a new copy of original array for another sort
    int arr_copy[size];

    // Filling the array with random numbers 
    set_array(arr, size);
    // Clone the array for another sort
    clone_array(arr_copy, arr, size);

    // Initialising the clock for getting the execution time
    clock_t asc_time_start = clock();
    shaker_sort_asc(arr, size);     // Perform sorting operation on an array
    double asc_time = (double)(clock() - asc_time_start)/CLOCKS_PER_SEC;    // Getting the time by deducting the initialised time from current time
    cout<< "Time for ascending array using shaker sort is: "<< asc_time<< " s"<< endl;      // Display the message to console

    // Initialising the clock for getting the execution time
    clock_t des_time_start = clock();
    shaker_sort_dec(arr_copy, size);    // Perform sorting operation on an array
    double des_time = (double)(clock() - des_time_start)/CLOCKS_PER_SEC;    // Getting the time by deducting the initialised time from current time

    // display_array(arr_copy, size);

    cout<< "Time for descending array using shaker sort is: "<< des_time<< " s"<< endl;     // Display the execution time on console

    return 0;
}
