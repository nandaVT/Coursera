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
  * @brief This is Week 1 assignment.
  *
  * This file is to be used by c1m1 assessment.
  *
  * @author Nanda Vardhan Thupalli
  * @date April 24, 2020
  *
  */


#ifndef __STATS_H__
#define __STATS_H__

 /**
  * @brief Prints all the Statistics of given array.
  *
  * This function returns the minimum, maximum, mean and median
    of the given array.
  *
  * @param  test The array
  * @param  SIZE The length of the given array.
  *
  * @return NO_RETURN_VARIABLE
  */
  void print_statistics(char test, int SIZE);

  /**
   * @brief To print all the array elements.
   *
   * This function prints all the array elements.
   *
   * @param test The array
   * @param SIZE The length of the given array.
   *
   * @return NO_RETURN_VARIABLE
   */
   void print_array(char test, int SIZE);

   /**
    * @brief We find the median of the given array.
    *
    * Using the given array we find the median of all the elements.
    *
    * @param test The array
    * @param SIZE The length of the given array.
    * @param median Stores the median of the array.
    *
    * @return median of the array
    */
    int find_median(char test, int SIZE);

    /**
     * @brief We find the mean of the given array.
     *
     * Using the given array we find the median of all the elements.
     *
     * @param test The array
     * @param SIZE The length of the given array.
     * @param mean Stores the mean of the array
     *
     * @return mean of the array
     */
     int find_mean(char test, int SIZE);

     /**
      * @brief To find maximum element of the given array.
      *
      * Using the given array we find the maximum element.
      *
      * @param test The array
      * @param SIZE The length of the given array.
      * @param maximum Stores the maximum of the array.
      *
      * @return maximum element of the array.
      */
      int find_maximum(char test, int SIZE);

      /**
       * @brief To find minimum element of the given array.
       *
       * Using the given array we find the minimum element.
       *
       * @param test The array
       * @param SIZE The length of the given array.
       * @param minimum Stores the minimum of the array
       *
       * @return minimum element of the array.
       */
       int find_minimum(char test, int SIZE);


#endif /* __STATS_H__ */
