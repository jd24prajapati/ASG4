#include<iostream>
using namespace std;

/**
* Function          : set_array
* Author            : Jaydeep Prajapati(Student ID: 200168915)
* Date of creation  : 09 Nov, 2021
* Purpose           : This method will assign the random number to given array till given size 
* Parameter(s)      : 
* <1> int arr[]     : An array, to fill the random values
* <2> int size      : Size of an array
* Precondition(s)   : N/A
* Returns           : N/A 
* Side effect       : N/A 
*
*  */
void set_array(int arr[], unsigned int size)
{
    // Assigning the random number to given array till given size
    for(unsigned int index=0; index<size; index++)
        arr[index] = rand();    // assign the random numbers

}

/**
* Function          : display_array
* Author            : Jaydeep Prajapati(Student ID: 200168915)
* Date of creation  : 09 Nov, 2021
* Purpose           : This method will display the given array 
* Parameter(s)      : 
* <1> int arr[]     : An array, which is goint to disply
* <2> int size      : Size of an array
* Precondition(s)   : N/A
* Returns           : N/A 
* Side effect       : N/A 
*
*  */
void display_array(int arr[], unsigned int size)
{
    for(unsigned int index=0; index< size; index++)
        cout<< arr[index]<< "  ";
    cout<< "\n";
}

/**
* Function          : clone_array
* Author            : Jaydeep Prajapati(Student ID: 200168915)
* Date of creation  : 09 Nov, 2021
* Purpose           : This method will clone the array into another
* Parameter(s)      : 
* <1> int arr_copy[]: An array, which will store the values
* <2> int arr[]     : Original array
* <3> int size      : Size of an array
* Precondition(s)   : N/A
* Returns           : N/A 
* Side effect       : N/A 
*
*  */
void clone_array(int arr_copy[],int arr[], int size)
{
    // Assigning the value from 'arr' to 'arr_copy' one by one 
    for(unsigned int index= 0; index< size; index++)
        arr_copy[index] = arr[index];
}


/**
* Function          : shaker_sort_asc
* Author            : Jaydeep Prajapati(Student ID: 200168915)
* Date of creation  : 09 Nov, 2021
* Purpose           : This method will sort the array in an ascending order
* Parameter(s)      : 
* <1> int arr[]     : An array
* <2> int size      : Size of an array
* Precondition(s)   : N/A
* Returns           : N/A 
* Side effect       : N/A 
*
*  */
void shaker_sort_asc(int arr[], int size)
{
    // Initializing the variables
    bool is_swap = true;
    int s_index = 0;
    int e_index = size - 1;
 
    while (is_swap)
    {
        // Setting the flag to false
        is_swap = false;
 
        // Checking and swap, if needed.
        // If, swap is performing then, is_swap flag will be set to true
        for (int index = s_index; index < e_index; ++index)
        {
            if (arr[index] > arr[index + 1]) {
                swap(arr[index], arr[index + 1]);      // Swap the elements
                is_swap = true;     // Update the status of flag
            }
        }
 
        // When array is already sorted and no need of swap
        if (!is_swap)
            break;
 
        // Reseting the flag 'is_swap'
        is_swap = false;
 
        // Updating the end index. Because with every iteration last value will be largest
        // and no need of comparision
        --e_index;
 
        // Doing same thing from reverse(Implementation of bubble sort)
        for (int index = e_index - 1; index >= s_index; --index)
        {
            if (arr[index] > arr[index + 1]) {
                swap(arr[index], arr[index + 1]);   // Swap the elements
                is_swap = true;     // Update the status of flag
            }
        }
 
        // Update the starting index. Because first element will be the smallest with every iteration   
        ++s_index;
    }

}


/**
* Function          : shaker_sort_dec
* Author            : Jaydeep Prajapati(Student ID: 200168915)
* Date of creation  : 09 Nov, 2021
* Purpose           : This method will clone the array in the descending order
* Parameter(s)      : 
* <1> int arr[]     : An array
* <2> int size      : Size of an array
* Precondition(s)   : N/A
* Returns           : N/A 
* Side effect       : N/A 
*
*  */
void shaker_sort_dec(int arr[], int size)
{
    // Initializing the variables
    bool is_swap = true;
    int s_index = 0;
    int e_index = size - 1;
 
    while (is_swap)
    {
        // Setting the flag to false
        is_swap = false;
 
        // Checking and swap, if needed.
        // If, swap is performing then, is_swap flag will be set to true
        for (int index = s_index; index < e_index; ++index)
        {
            if (arr[index] < arr[index + 1]) {
                swap(arr[index], arr[index + 1]);   // Swap the elements
                is_swap = true;     // Update the status of flag
            }
        }
 
        // When array is already sorted and no need of swap
        if (!is_swap)
            break;
 
        // Reseting the flag 'is_swap'
        is_swap = false;
 
        // Updating the end index. Because with every iteration last value will be smallest
        // and no need of comparision
        --e_index;
 
        // Doing same thing from reverse(Implementation of bubble sort)
        for (int index = e_index - 1; index >= s_index; --index)
        {
            if (arr[index] < arr[index + 1]) {
                swap(arr[index], arr[index + 1]);   // Swap the elements
                is_swap = true;     // Update the status of flag
            }
        }
 
        // Update the starting index. Because first element will be the largest with every iteration
        ++s_index;
    }

}