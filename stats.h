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
 * @brief Embedded Software HW1
 *

 * @author NITTEESH M 
 * @date 30/1/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/* print_statistics() */ 
void print_statistics(float median, float mean, int maximum, int minimum);



void sort_array(unsigned char test[]);

void print_array(unsigned char test[]);

 int find_maximum(unsigned char test[]);


int find_minimum(unsigned char test[]);                     /*functions requires for performing the program*/
 
float find_mean(unsigned char test[]);

void sort_array(unsigned char test[]);
float find_median(unsigned char test[]);

#endif /* __STATS_H__ */