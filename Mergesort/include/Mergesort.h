/**
 * Header file for the mergesort algorithm class
 */

#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

using std::vector;

/**
 * Driver function for the mergesort algorithm
 * @param array the vector of integers to be sorted
 */
void Mergesort(vector<int> &nums);

/**
 * Recursive function for the mergesort algorithm
 * @param array the vector of integers to be sorted
 * @param start the lower bound 
 * @param mid the middle, where we will split the array
 */
void Mergesort(vector<int> &nums, int start, int end);

/**
 * Merging function for the mergesort algorithm
 * @param start the lower bound
 * @param mid the middle
 */
void Merge(vector<int> &nums, int start, int end);

#endif