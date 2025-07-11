/**
 * Header file for the mergesort algorithm class
 */

#ifndef MERGESORT_H
#define MERGESORT_H

void Mergesort(int array[]);

void Mergesort(int array[], int start, int mid, int end);

void Merge(int start, int mid, int end);

#endif