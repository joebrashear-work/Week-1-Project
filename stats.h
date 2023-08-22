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
 * @file stats.h 
 * @brief Function declarations for stats.c
 *
 * Function declarations for stats.c analytics program
 *
 * @author William Brashear
 * @date 8/22/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

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
void print_statistics(unsigned char arr[], int n);

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
void print_array(unsigned char arr[], int n);

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
void find_median(unsigned char arr[], int n);

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
void find_mean(unsigned char arr[], int n);

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
void find_maximum(unsigned char arr[], int n);

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
void find_minimum(unsigned char arr[], int n);

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
void sort_array(unsigned char arr[], int n);

#endif /* __STATS_H__ */
