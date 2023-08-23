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
 * @brief function declarations
 *
 * function declarations for assignment
 *
 * @author William Brashear
 * @date 8/23/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief prints min, max, mean and median
 *
 * prints min, max, mean and median
 *
 * @param unsigned char array with data
 * @param size of array
 *
 * @return prints statistics
 */
void print_statistic(unsigned char arr[], int n);

/**
 * @brief prints array
 *
 * prints array
 *
 * @param unsigned char array with data
 * @param size of array
 *
 * @return prints array
 */
void print_array(unsigned char arr[], int n);

/**
 * @brief prints array
 *
 * prints array
 *
 * @param unsigned char array with data
 * @param size of array
 *
 * @return prints array
 */
unsigned char find_median(unsigned char arr[], int n);

/**
 * @brief finds mean of array
 *
 * finds mean of array
 *
 * @param unsigned char array with data
 * @param size of array
 *
 * @return mean of array
 */
unsigned char find_mean(unsigned char arr[], int n);

/**
 * @brief finds max of array
 *
 * finds max of array
 *
 * @param unsigned char array with data
 * @param size of array
 *
 * @return max of array
 */
unsigned char find_maximum(unsigned char arr[], int n);

/**
 * @brief finds min of array
 *
 * finds min of array
 *
 * @param unsigned char array with data
 * @param size of array
 *
 * @return min of array
 */
unsigned char find_minimum(unsigned char arr[], int n);

/**
 * @brief sorts array
 *
 * sorts array
 *
 * @param unsigned char array with data
 * @param size of array
 *
 * @return sorted array in memory
 */
void sort_array(unsigned char arr[], int n);


#endif /* __STATS_H__ */
