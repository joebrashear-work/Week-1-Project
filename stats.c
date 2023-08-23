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
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char arr[], int n)
{
  sort_array(arr, n);
  print_array(arr, n);
  printf("Min: %d\n", find_minimum(arr, n));
  printf("Max: %d\n", find_maximum(arr, n));
  printf("Mean: %d\n", find_mean(arr, n));
  printf("Median: %d\n", find_median(arr, n));
}
void print_array(unsigned char arr[], int n)
{
  printf("[ ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("]\n");
}
unsigned char find_median(unsigned char arr[], int n)
{
  if (n == 1)
  {
    return arr[0];
  }
  if (n % 2 == 1)
  {
    return arr[n/2];
  }
  else
  {
    return (arr[n/2] + arr[(n/2)-1]) / 2;
  }
}
unsigned char find_mean(unsigned char arr[], int n)
{
  unsigned int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  return sum / n;
}
unsigned char find_maximum(unsigned char arr[], int n)
{
  return arr[0];
}
unsigned char find_minimum(unsigned char arr[], int n)
{
  return arr[n-1];
}
void sort_array(unsigned char arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] < arr[j])
      {
        unsigned char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      } 
    }
  }
}
