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
  @file stats.c 
  @brief Embedded Software HW1
     
     * @author NITTEESH M
     * @date 06/14/18
     

*/



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

        printf("Embedded Software week1 assignment  \n");
   unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                               114, 88,   45,  76, 123,  87,  25,  23,
                               200, 122, 150, 90,   92,  87, 177, 244,
                               201,   6,  12,  60,   8,   2,   5,  67,
                                 7,  87, 250, 230,  99,   3, 100,  90};


  unsigned char sorted_array[SIZE];
  int maximum = 0, minimum = 0;
  float median = 0, mean = 0;
  


  printf("Unsorted array \n");

  print_array(test);

  sort_array(test);

  printf("\nSorted array \n");

  print_array(test);

  printf("\n");
  
  mean   = find_mean(test);
  

  maximum = find_maximum(test);
  
  median  = find_median(test);


  minimum = find_minimum(test);


  print_statistics(median, mean, maximum, minimum);
 
 }

void sort_array(unsigned char test[]) {
       int i = 0, j = 0;
       unsigned char temp = 0;
       for (j = 0; j < SIZE; j++) {
               for (i = 0; i < SIZE; i++) {
                       if (test[j] > test[i]) {
                               temp = test[j];
                               test[j] = test[i];
                               test[i] = temp;

                       }
               }
               
       }
}

void print_statistics(float median, float mean, int maximum, int minimum) {
       printf("Median = %f; \t Mean = %f; \t Maximum = %i; \t Minimum = %i\n", median, mean, maximum, minimum);
}


void print_array(unsigned char test[]) {
       int i = 0;
       for (i = 0; i < SIZE; i++) {
               printf("%i, ", test[i]);
       }
}




// @function: function definition to find minimum number in array
int find_minimum(unsigned char test[]) {
       int i = 0, minimum = 0;
       for(i = 0; i < SIZE; i++) {
               if(minimum < test[i]) {
                       minimum = test[i];
               }
       }
       return minimum;
}
 

int find_maximum(unsigned char test[]) {
       int i = 0, maximum = 0;
       for(i = 0; i < SIZE; i++) {
               if(maximum < test[i]) {
                       maximum = test[i];
               }
       }
}


float find_median(unsigned char sorted_array[]) {
       int i = 0, median = 0;
       if (SIZE % 2 == 0) {
       
               median = (sorted_array[SIZE/2] + sorted_array[SIZE/2 - 1])/2;
       } else {
               median = sorted_array[(SIZE / 2)];
       }
       return median;
}
 

float find_mean(unsigned char test[]) {
       int i = 0, mean = 0;
       for(i = 0; i < SIZE; i++) {
               mean = mean + test[i];
       }
       mean = mean / (SIZE + 1);
       return mean;
 }