/**\
 * Mergesort class implementation
 * Written by Spencer Cologna
 * 7/20/2025
 */

 #include "../include/Mergesort.h"

void Mergesort(vector<int> &nums){
    int length = nums.size() - 1;

    Mergesort(nums, 0, length); 
    
}

void Mergesort(vector<int> &nums, int start, int end){
    if((end - start) < 2){
        return;
    }

    Mergesort(nums, start, end/2);
    Mergesort(nums, end/2 + 1, end);

    
}

void Merge(vector<int> &nums, int start, int end){}