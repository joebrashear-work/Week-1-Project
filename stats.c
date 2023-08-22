/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Analytics program for max, min, mean, and median of a data set
 *
 * First Week Homework for embedded class
 *
 * @author William Brashear
 * @date 8/22/2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Hello, World!\n");
}

/* Add other Implementation File Code Here */

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief prints min, max, mean, median
 *
 * prints min, max, mean, median
 *
 * @param Data Array
 * @param Size of Array
 *
 * @return print of min, max, mean, median
 */
void print_statistics(unsigned char arr[], int n){return;}

/**
 * @brief prints array
 *
 * prints array
 *
 * @param Data Array
 * @param Size of Array
 *
 * @return print of array
 */
void print_array(unsigned char arr[], int n){return;}

/**
 * @brief finds median of array
 *
 * finds median of array
 *
 * @param Data Array
 * @param Size of Array
 *
 * @return print of the median of array
 */
void find_median(unsigned char arr[], int n){return;}

/**
 * @brief finds mean of array
 *
 * finds mean of array
 *
 * @param Data Array
 * @param Size of Array
 *
 * @return print of the mean of array
 */
void find_mean(unsigned char arr[], int n){return;}

/**
 * @brief finds max of array
 *
 * finds max of array
 *
 * @param Data Array
 * @param Size of Array
 *
 * @return print of the max of array
 */
void find_maximum(unsigned char arr[], int n){return;}

/**
 * @brief finds min of array
 *
 * finds min of array
 *
 * @param Data Array
 * @param Size of Array
 *
 * @return print of the min of array
 */
void find_minimum(unsigned char arr[], int n){return;}

/**
 * @brief sorts array in reverse
 *
 * sorts array in reverse
 *
 * @param Data Array
 * @param Size of Array
 *
 * @return sorts array in reverse
 */
void sort_array(unsigned char arr[], int n){return;}
