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
 * @brief This is Week 1 assignment.
 *
 * This code contains 8 user defined function and print the Statistics, array,
    median, mean,  maximum and minimum of the given array.
 *
 * @author Nanda Vardhan Thupalli
 * @date April 24, 2020
 *
 */

void print_statistics(unsigned char* p, int size);
void print_array(unsigned char* test, int size);
int find_median(unsigned char* test, int size);
int find_mean(unsigned char* test, int size);
int find_maximum(unsigned char* test, int size);
int find_minimum(unsigned char* test, int size);
void sort_array(unsigned char* p, int size);

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  char* p = test;
  print_statistics( p , SIZE);
  print_array(p , SIZE );
  printf("************************\n");
  int median = find_median( p ,SIZE);
  printf("Median = %d\n", median);
  printf("************************\n");
  int mean = find_mean(p , SIZE);
  printf("Mean = %d\n", mean);
  printf("************************\n");
  int maximum = find_maximum(p , SIZE);
  printf("Maximum number = %d\n",maximum);
  printf("************************\n");
  int minimum = find_minimum(p , SIZE);
  printf("Minimum number = %d\n",minimum);
  printf("************************\n");
  sort_array(p, SIZE);
  printf("\n");
  return 0;
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char* p , int size){
  int median = find_median( p ,SIZE);
  int mean = find_mean(p , SIZE);
  int maximum = find_maximum(p , SIZE);
  int minimum = find_minimum(p , SIZE);
  printf("************************\n");
  printf("STATISTICS :\n");
  printf("Median = %d\n", median);
  printf("Mean = %d\n", mean);
  printf("Maximum number = %d\n",maximum);
  printf("Minimum number = %d\n",minimum);
}

void print_array(unsigned char* p, int size){
  int i;
  printf("************************\n");
  printf("The elements of the array are :\n");
  for( i = 0 ; i < size ; i++){
    printf("%d ,",*p);
    p++;
  }
  printf("\n");
}

int find_median(unsigned char* p, int size){
  int i;
  int arr[40];
  for( i = 0 ; i < (size) ; i++){
    arr[i] = *p;
    p++;
  }
  int temp;
  for( i = 0 ; i < (size-1) ; i++){
    for(int j = i; j <= size ; j++){
      if(arr[i] < arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  int length = sizeof arr/sizeof arr[0];
  int median = 0;
  if(length%2 == 0){
    median = (arr[(length/2)-1]+arr[(length/2)])/2;
    //printf("Median of given array = %d\n",median);
  }else{
    median = arr[(length/2)-1];
  }

  return median;
}

int find_mean(unsigned char* p, int size){
  int i;
  int arr[40];
  int count=0;
  for( i = 0 ; i < (size) ; i++){
    arr[i] = *p;
    p++;
    count = count + *p;
  }
  int mean = count/40;
  //printf("%d\n",mean);
  return mean;
}

int find_maximum(unsigned char* p, int size){
  int i,maximum = *p;
  for( i = 0 ; i < (size) ; i++){
    if(*p > maximum){
      maximum = *p;
    }
    p++;
  }
  //printf("%d\n",maximum);
  return maximum;
}

int find_minimum(unsigned char* p, int size){
  int i,minimum = *p;
  for( i = 0 ; i < (size) ; i++){
    if(*p < minimum){
      minimum = *p;
    }
    p++;
  }
  //printf("%d\n",minimum);
  return minimum;
}
void sort_array(unsigned char* p ,int size){

  int i;
  int arr[40];
  for( i = 0 ; i < (size) ; i++){
    arr[i] = *p;
    p++;
  }
  int temp;
  for( i = 0 ; i < (size-1) ; i++){
    for(int j = i; j <= size ; j++){
      if(arr[i] < arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("SORTED ELEMENTS :\n");
  for( i = 0 ; i < size ; i++){
    printf("%d ,",arr[i]);
  }
}
